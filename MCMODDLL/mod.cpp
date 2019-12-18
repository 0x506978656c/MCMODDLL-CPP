#include "pch.h"
#include "mod.h"
#include "SymHook.h"
#include "Minecraft.hpp"
using namespace SymHook;

/**����������������������������������������������������������������������������**
 |              MOD C++�ļ�               |
 **����������������������������������������������������������������������������**
˵����
��cpp�ļ���Ŀ���ǰ���MOD������Ҫ���룬�뽫��Ҫ���ִ���д������ļ��ڣ�
��T����ͷ��ϵ��Hook����ģ����ص�ʱ����ã�ʹ�÷�����ο�MCMrARM��modloader��
��ַ��https://github.com/minecraft-linux/server-modloader/wiki
��ע�⣺ʹ�÷������в�ͬ�����ļ��ĺ��������õ���PDB�������ɵ�C++�������������ַ�����������
���⣬���ļ�������������mod_init��mod_exit���ֱ��ڸ�ģ����ػ��˳�ʱ���á�
��ģ�����ӣ�
THook(void,							// ������������
	MSSYM_XXXXXXXXXXXXXXXXXXXXX,	// ������������Ӧ��C++������λ��SymHook.h��
	__int64 a1, __int64 a2) {		// �������������б�������ڲ���a1��a2��
	std::cout << "Hello world!" << std::endl;
	original(a1, a2);				// ���øú���Hookǰ��ԭʼ����
}
*/
// �˴���ʼ��дMOD����

#include <map>
#include <unordered_map>
#include <string>
#include <chrono>

//std::map<short, std::string> BlockRegMap;

// ע�᷽���ʱ�򹹽�����ID���ұ�
//THook(void,
//	MSSYM_B1QE14registerBlocksB1AE17VanillaBlockTypesB2AAA5YAXXZ,
//	void* _this) {
//	original(_this);
//	std::unordered_map<std::string, SharedPtr<BlockLegacy>>* pMap;
//	pMap = SYM_PTR(decltype(pMap), MSSYM_MD5_ceb8b47184006e4d7622b39978535236);
//	for (auto i = pMap->begin(); i != pMap->end(); ++i) {
//		auto id = i->second->getBlockItemID();
//		auto str = std::string("Mincraft: " + id);
//			//i->second->getFullName();
//		BlockRegMap.emplace(id, str);
//	}
//}

namespace Log {
	namespace Helper {
		template<size_t size>
		void UtoA_Fill(char (&buf)[size], int num) {
			int nt = size - 1;
			buf[nt] = 0;
			for (auto i = nt - 1; i >= 0; --i) {
				char d = '0' + (num % 10);
				num /= 10;
				buf[i] = d;
			}
		}

		auto TimeNow() {
			auto timet = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
			tm time;
			char buf[3] = { 0 };
			localtime_s(&time, &timet);
			std::string str(std::to_string((time.tm_year + 1900)));
			str += "-";
			UtoA_Fill(buf, time.tm_mon + 1);
			str += buf; str += "-";
			UtoA_Fill(buf, time.tm_mday);
			str += buf; str += " ";
			UtoA_Fill(buf, time.tm_hour);
			str += buf; str += ":";
			UtoA_Fill(buf, time.tm_min);
			str += buf; str += ":";
			UtoA_Fill(buf, time.tm_sec);
			str += buf;
			return str;
		}

		auto Title(const std::string& content) {
			return std::string("{[") + TimeNow() + " " + content + "]";
		}
		auto Coordinator(INT32 coordinator[]) {
			return std::string("(")
				+ std::to_string(coordinator[0]) + ", "
				+ std::to_string(coordinator[1]) + ", "
				+ std::to_string(coordinator[2]) + ")";
		}

		auto Pos(Vec3* v) {
			return "(" +
				std::to_string(int(v->x)) + ", "
				+ std::to_string(int(v->y)) + ", "
				+ std::to_string(int(v->z))
				+ ")";
		}

		auto Dimension(int v) {
			switch (v) {
			case 0: return u8"������";
			case 1: return u8"����";
			case 2: return u8"ĩ��";
			}
			return u8"δ֪ά��";
		}
	}

	namespace Player {
		using namespace Helper;

		void Error(const std::string& title, const std::string& player_name, int dimension, const std::string& content) {
			std::cout
				<< Title(title) << " "
				<< u8"���" << " " << player_name << " "
				<< u8"��" << Dimension(dimension)
				<< content << std::endl;
		}
		void Block(const std::string& title, const std::string& player_name, char isStand, int dimension, const std::string& operation, const std::string & block_name, INT32 coordinator[]) {
			auto block_name_inner = block_name;
			if (block_name_inner == "")
				block_name_inner = u8"δ֪����";
			std::cout
				<< Title(title) << " "
				<< u8"���" << " " << player_name << " " << (!isStand ? u8"���յ� " : "")
				<< u8"��" <<Dimension(dimension)<< " " << Coordinator(coordinator) << " "
				<< operation << " "
				<< block_name_inner << " " << u8"���顣"
				<< std::endl;
		}
		void Item(const std::string& title, const std::string& player_name, char isStand, int dimension, const std::string& operation, const std::string& item_name, INT32 coordinator[]) {
			std::cout
				<< Title(title) << " "
				<< u8"���" << " " << player_name << " " << (!isStand ? u8"���յ� " : "")
				<< u8"��" << Dimension(dimension) << " " << Coordinator(coordinator) << " "
				<< operation << " "
				<< item_name << " " << u8"��Ʒ��"
				<< std::endl;
		}
		void Interaction(const std::string& title, const std::string& player_name, char isStand, int dimension, const std::string& operation, const std::string& object_name, INT32 coordinator[]) {
			std::cout
				<< Title(title) << " "
				<< u8"���" << " " << player_name << " " << (!isStand ? u8"���յ� " : "")
				<< operation 
				<< u8"��" << Dimension(dimension) << " " << Coordinator(coordinator) << " " << u8"��"
				<< object_name << u8"��"
				<< std::endl;
		}
		void Container_In(const std::string& title, const std::string& player_name, int dimension, int slot, int count, const std::string& object_name) {
			std::cout
				<< Title(title) << " "
				<< u8"���" << " " << player_name << " "
				<< u8"��" << " " << slot << " " << u8"����"
				<< u8"����" << " "
				<< count << " " << u8"��" << " "
				<< object_name << " " << u8"��Ʒ��"
				<< std::endl;
		}
		void Container_Out(const std::string& title, const std::string& player_name, int dimension, int slot) {
			std::cout
				<< Title(title) << " "
				<< u8"���" << " " << player_name << " "
				<< u8"ȡ��" << " " << slot << " " << u8"������Ʒ��"
				<< std::endl;
		}

		void ChangeDimension(const std::string& title, const std::string& player_name, int dimension, Vec3 *v) {
			std::cout
				<< Title(title) << " "
				<< u8"��� " << player_name << u8" �ı�ά���� "
				<< Dimension(dimension) << " " << Pos(v) + u8"��"
				<< std::endl;
		}

		void ChatMessage(const std::string& title, const std::string& player_name, const std::string& target,
			const std::string& msg, const std::string& chat_style) {
			std::cout
				<< Title(title) << " "
				<< u8"��� " << player_name << (target != "" ? u8" ���ĵض� " + target : "")
				<< u8" ˵:" << msg
				<< std::endl;
		}

	}

	namespace Dieinfo {
		using namespace Helper;
		void showDie(const std::string& title, const std::string& mob_name, const std::string& src_name) {
			std::cout
				<< Title(title) << " "
				<< mob_name << u8" �� " << ((src_name != "") ? src_name : " ") << u8" ɱ����" << std::endl;
		}
	}
};

// ��ҷ��÷���
THook(__int64,
	MSSYM_B1QE21onBlockPlacedByPlayerB1AE34VanillaServerGameplayEventListenerB2AAA4UEAAB1QE14AW4EventResultB2AAE10AEAVPlayerB2AAA9AEBVBlockB2AAE12AEBVBlockPosB3AAUA1NB1AA1Z,
	void* _this, Player* pPlayer, const Block* pBlk, const BlockPos* pBlkpos, bool _bool) {
	Log::Player::Block("Event", pPlayer->getNameTag()->c_str(), pPlayer->isStand(), pPlayer->getDimension(), u8"����", pBlk->getLegacyBlock()->getFullName(), pBlkpos->getPosition());
	return original(_this, pPlayer, pBlk, pBlkpos, _bool);
}
// ��Ҳ�����Ʒ
THook(bool,
	MSSYM_B1QA9useItemOnB1AA8GameModeB2AAA4UEAAB1UE14NAEAVItemStackB2AAE12AEBVBlockPosB2AAA9EAEBVVec3B2AAA9PEBVBlockB3AAAA1Z,
	void* _this, ItemStack* item, const BlockPos* pBlkpos, unsigned __int8 a4, void *v5, Block* pBlk) {
	auto pPlayer = *reinterpret_cast<Player * *>(reinterpret_cast<VA>(_this) + 8);
	std::string mstr = "";
	item->getName(mstr);
	bool ret = original(_this, item, pBlkpos, a4, v5, pBlk);
	if (ret) {
		Log::Player::Item("Event", pPlayer->getNameTag()->c_str(), pPlayer->isStand(), pPlayer->getDimension(), u8"����", mstr, pBlkpos->getPosition());
	}
	return ret;
}
// ����ƻ�����
THook(bool,
	MSSYM_B2QUE20destroyBlockInternalB1AA8GameModeB2AAA4AEAAB1UE13NAEBVBlockPosB2AAA1EB1AA1Z,
	void * _this, const BlockPos* pBlkpos) {
	auto pPlayer = *reinterpret_cast<Player * *>(reinterpret_cast<VA>(_this) + 8);
	auto pBlockSource = *(BlockSource * *)(*((__int64*)_this + 1) + 840i64);
	auto pBlk = pBlockSource->getBlock(pBlkpos);
	auto block_name = pBlk->getLegacyBlock()->getFullName();
	bool ret = original(_this, pBlkpos);
	if (!ret)
		return ret;
	Log::Player::Block("Event", pPlayer->getNameTag()->c_str(), pPlayer->isStand(), pPlayer->getDimension(), u8"�ƻ�", block_name, pBlkpos->getPosition());
	return ret;
}

// ��Ҵ�����
THook(void,
	MSSYM_B1QA9startOpenB1AE15ChestBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z,
	void* _this, Player* pPlayer) {
	auto real_this = reinterpret_cast<void*>(reinterpret_cast<VA>(_this) - 248);
	auto pBlkpos = reinterpret_cast<BlockActor*>(real_this)->getPosition();
	Log::Player::Interaction("Event", pPlayer->getNameTag()->c_str(), pPlayer->isStand(), pPlayer->getDimension(), u8"����", u8"����", pBlkpos->getPosition());
	original(_this, pPlayer);
}
// ��Ҵ�ľͰ
THook(void,
	MSSYM_B1QA9startOpenB1AE16BarrelBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z,
	void* _this, Player* pPlayer) {
	auto real_this = reinterpret_cast<void*>(reinterpret_cast<VA>(_this) - 248);
	auto pBlkpos = reinterpret_cast<BlockActor*>(real_this)->getPosition();
	Log::Player::Interaction("Event", pPlayer->getNameTag()->c_str(), pPlayer->isStand(), pPlayer->getDimension(), u8"����", u8"ľͰ", pBlkpos->getPosition());
	original(_this, pPlayer);
}
// ��ҹر�����
THook(__int64,
	MSSYM_B1QA8stopOpenB1AE15ChestBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z,
	void* _this, Player * pPlayer) {
	auto real_this = reinterpret_cast<void*>(reinterpret_cast<VA>(_this) - 248);
	auto pBlkpos = reinterpret_cast<BlockActor*>(real_this)->getPosition();
	Log::Player::Interaction("Event", pPlayer->getNameTag()->c_str(), pPlayer->isStand(), pPlayer->getDimension(), u8"�ر�", u8"����", pBlkpos->getPosition());
	return original(_this, pPlayer);
}
// ��ҹر�ľͰ
THook(__int64,
	MSSYM_B1QA8stopOpenB1AE16BarrelBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z,
	void* _this, Player* pPlayer) {
	auto real_this = reinterpret_cast<void*>(reinterpret_cast<VA>(_this) - 248);
	auto pBlkpos = reinterpret_cast<BlockActor*>(real_this)->getPosition();
	Log::Player::Interaction("Event", pPlayer->getNameTag()->c_str(), pPlayer->isStand(), pPlayer->getDimension(), u8"�ر�", u8"ľͰ", pBlkpos->getPosition());
	return original(_this, pPlayer);
}

// ��ҷ���ȡ������
THook(void,
	MSSYM_B1QA7setSlotB1AE26LevelContainerManagerModelB2AAE28UEAAXHAEBUContainerItemStackB3AAUA1NB1AA1Z,
	LevelContainerManagerModel * _this, int a2, ContainerItemStack * a3) {
	auto slot = a2;
	auto pItemStack = a3;
	auto id = pItemStack->getId();
	auto size = pItemStack->getStackSize();
	auto pPlayer = _this->getPlayer();
	if (id >= 0) {
		std::string object_name;
		pItemStack->getName(object_name);
		if (size == 0) {
			Log::Player::Container_Out("Event", pPlayer->getNameTag()->c_str(), pPlayer->getDimension(), slot);
		} else
			Log::Player::Container_In("Event", pPlayer->getNameTag()->c_str(), pPlayer->getDimension(), slot, size, object_name);
	} else
		Log::Player::Error("Warning", pPlayer->getNameTag()->c_str(), pPlayer->getDimension(), u8"ʹ����δ֪���飡");
	original(_this, a2, a3);
}

// ����л�ά��
THook(bool,
	MSSYM_B2QUE21playerChangeDimensionB1AA5LevelB2AAA4AEAAB1UE11NPEAVPlayerB2AAE26AEAVChangeDimensionRequestB3AAAA1Z,
	void* _this, Player* pPlayer, void* req) {
	bool ret = original(_this, pPlayer, req);
	if (ret)
		Log::Player::ChangeDimension("Dimension", pPlayer->getNameTag()->c_str(), pPlayer->getDimension(), pPlayer->getPos());
	return ret;
}

// ������������
THook(void,
	MSSYM_B1QA3dieB1AA3MobB2AAE26UEAAXAEBVActorDamageSourceB3AAAA1Z,
	Mob* _this, void* dmsg) {
	auto mob_name = _this->getNameTag()->c_str();
	if (strlen(mob_name) != 0) {
		char v72;
		__int64  v2[2];
		v2[0] = (__int64)_this;
		v2[1] = (__int64)dmsg;
		auto v7 = *((__int64*)(v2[0] + 856));
		auto srActid = (__int64*)(*(__int64(__fastcall * *)(__int64, char*))(*(__int64*)v2[1] + 56i64))(
			v2[1],
			&v72);
		auto SrAct = SYM_CALL(const Actor * (*)(__int64, __int64, char),
			MSSYM_B1QE11fetchEntityB1AA5LevelB2AAE13QEBAPEAVActorB2AAE14UActorUniqueIDB3AAUA1NB1AA1Z,
			v7, *srActid, 0);
		auto sr_name = "";
		if (SrAct) {
			sr_name = SrAct->getNameTag()->c_str();
		}
		Log::Dieinfo::showDie("DeathInfo", mob_name, sr_name);
	}
	original(_this, dmsg);
}

// ������Ϣ
THook(void,
	MSSYM_MD5_ad251f2fd8c27eb22c0c01209e8df83c,
	void * _this, std::string& player_name, std::string& target, std::string& msg, std::string& char_style) {
	original(_this, player_name, target, msg, char_style);
	Log::Player::ChatMessage("Chat", player_name, target, msg, char_style);
}



// ���������������Ǳ�Ҫ�ģ������ʹ�ã�Ҳ���Բ�ʹ�á�
void mod_init() {
	// �˴���дģ�����ʱ��Ĳ���
	// system("chcp 65001");
	std::cout << u8"{��ز���Ѽ��ء�" << std::endl;
}
void mod_exit() {
	// �˴���дģ��ж��ʱ��Ĳ���
}
