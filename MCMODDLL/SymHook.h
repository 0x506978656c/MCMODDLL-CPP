// ���ļ�������PDB�������ɡ�
// ע�⣺
// �����κ�ķ���ԭ�Ϳ������󣬽����ο���
// �����ķ��Ž������Ӧ��md5ֵ��ʾ�÷��Ŷ�Ӧ�ı�ʶ����
#pragma once

namespace SymHook{
	using RVA = unsigned int;

	// [ԭ��] private: static class std::unordered_map<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class SharedPtr<class BlockLegacy>,struct std::hash<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,struct std::equal_to<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class SharedPtr<class BlockLegacy> > > > BlockTypeRegistry::mBlockLookupMap
	// [����] ?mBlockLookupMap@BlockTypeRegistry@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VBlockLegacy@@@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VBlockLegacy@@@@@std@@@2@@std@@A
	constexpr RVA MSSYM_MD5_ceb8b47184006e4d7622b39978535236 = 0x013DB3F0;

	// [ԭ��] void __cdecl VanillaBlockTypes::registerBlocks(void)
	// [����] ?registerBlocks@VanillaBlockTypes@@YAXXZ
	constexpr RVA MSSYM_B1QE14registerBlocksB1AE17VanillaBlockTypesB2AAA5YAXXZ = 0x00882530;

	// [ԭ��] public: short __cdecl BlockLegacy::getBlockItemId(void)const __ptr64
	// [����] ?getBlockItemId@BlockLegacy@@QEBAFXZ
	constexpr RVA MSSYM_B1QE14getBlockItemIdB1AE11BlockLegacyB2AAA7QEBAFXZ = 0x007FF5A0;

	// [ԭ��] public: virtual void __cdecl BlockLegacy::playerDestroy(class Player & __ptr64,class BlockPos const & __ptr64,class Block const & __ptr64)const __ptr64
	// [����] ?playerDestroy@BlockLegacy@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
	constexpr RVA MSSYM_B1QE13playerDestroyB1AE11BlockLegacyB2AAE15UEBAXAEAVPlayerB2AAE12AEBVBlockPosB2AAA9AEBVBlockB3AAAA1Z = 0x007FEA50;

	// [ԭ��] public: virtual bool __cdecl ItemFrameBlock::attack(class Player * __ptr64,class BlockPos const & __ptr64)const __ptr64
	// [����] ?attack@ItemFrameBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
	constexpr RVA MSSYM_B1QA6attackB1AE14ItemFrameBlockB2AAA4UEBAB1UE11NPEAVPlayerB2AAE12AEBVBlockPosB3AAAA1Z = 0x008613F0;

	// [ԭ��] public: virtual bool __cdecl ItemFrameBlock::playerWillDestroy(class Player & __ptr64,class BlockPos const & __ptr64,class Block const & __ptr64)const __ptr64
	// [����] ?playerWillDestroy@ItemFrameBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
	constexpr RVA MSSYM_B1QE17playerWillDestroyB1AE14ItemFrameBlockB2AAA4UEBAB1UE11NAEAVPlayerB2AAE12AEBVBlockPosB2AAA9AEBVBlockB3AAAA1Z = 0x008612C0;

	// [ԭ��] public: void __cdecl ItemFrameBlockActor::dropFramedItem(class BlockSource & __ptr64,bool) __ptr64
	// [����] ?dropFramedItem@ItemFrameBlockActor@@QEAAXAEAVBlockSource@@_N@Z
	constexpr RVA MSSYM_B1QE14dropFramedItemB1AE19ItemFrameBlockActorB2AAE20QEAAXAEAVBlockSourceB3AAUA1NB1AA1Z = 0x007E17A0;

	// [ԭ��] public: class BlockLegacy const & __ptr64 __cdecl Block::getLegacyBlock(void)const __ptr64
	// [����] ?getLegacyBlock@Block@@QEBAAEBVBlockLegacy@@XZ
	constexpr RVA MSSYM_B1QE14getLegacyBlockB1AA5BlockB2AAE19QEBAAEBVBlockLegacyB2AAA2XZ = 0x00061B80;

	// [ԭ��] public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __ptr64 __cdecl Actor::getNameTag(void)const __ptr64
	// [����] ?getNameTag@Actor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
	constexpr RVA MSSYM_B1QE10getNameTagB1AA5ActorB2AAA8UEBAAEBVB2QDA5basicB1UA6stringB1AA2DUB2QDA4charB1UA6traitsB1AA1DB1AA3stdB2AAA1VB2QDA9allocatorB1AA1DB1AA12B2AAA3stdB2AAA2XZ = 0x00495EF0;

	// [ԭ��] public: virtual class AutomaticID<class Dimension,int> __cdecl Actor::getDimensionId(void)const __ptr64
	// [����] ?getDimensionId@Actor@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
	constexpr RVA MSSYM_B1QE14getDimensionIdB1AA5ActorB2AAA4UEBAB1QA2AVB2QDE11AutomaticIDB1AE10VDimensionB2AAA1HB2AAA2XZ = 0x0049AFB0;

	// [ԭ��] private: bool __cdecl Level::_playerChangeDimension(class Player * __ptr64,class ChangeDimensionRequest & __ptr64) __ptr64
	// [����] ?_playerChangeDimension@Level@@AEAA_NPEAVPlayer@@AEAVChangeDimensionRequest@@@Z
	constexpr RVA MSSYM_B2QUE21playerChangeDimensionB1AA5LevelB2AAA4AEAAB1UE11NPEAVPlayerB2AAE26AEAVChangeDimensionRequestB3AAAA1Z = 0x009637F0;

	// [ԭ��] public: virtual void __cdecl Player::teleportTo(class Vec3 const & __ptr64,bool,int,int) __ptr64
	// [����] ?teleportTo@Player@@UEAAXAEBVVec3@@_NHH@Z
	constexpr RVA MSSYM_B1QE10teleportToB1AA6PlayerB2AAE13UEAAXAEBVVec3B3AAUA3NHHB1AA1Z = 0x00670460;

	// [ԭ��] private: class ServerPlayer * __ptr64 __cdecl ServerNetworkHandler::_getServerPlayer(class NetworkIdentifier const & __ptr64,unsigned char) __ptr64
	// [����] ?_getServerPlayer@ServerNetworkHandler@@AEAAPEAVServerPlayer@@AEBVNetworkIdentifier@@E@Z
	constexpr RVA MSSYM_B2QUE15getServerPlayerB1AE20ServerNetworkHandlerB2AAE20AEAAPEAVServerPlayerB2AAE21AEBVNetworkIdentifierB2AAA1EB1AA1Z = 0x002F5CE0;

	// [ԭ��] public: virtual void __cdecl ServerNetworkHandler::handle(class NetworkIdentifier const & __ptr64,class PlayerActionPacket const & __ptr64) __ptr64
	// [����] ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerActionPacket@@@Z
	constexpr RVA MSSYM_B1QA6handleB1AE20ServerNetworkHandlerB2AAE26UEAAXAEBVNetworkIdentifierB2AAE22AEBVPlayerActionPacketB3AAAA1Z = 0x002F27F0;

	// [ԭ��] public: virtual void __cdecl ServerNetworkHandler::handle(class NetworkIdentifier const & __ptr64,class MovePlayerPacket const & __ptr64) __ptr64
	// [����] ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMovePlayerPacket@@@Z
	constexpr RVA MSSYM_B1QA6handleB1AE20ServerNetworkHandlerB2AAE26UEAAXAEBVNetworkIdentifierB2AAE20AEBVMovePlayerPacketB3AAAA1Z = 0x002F1300;

	// [ԭ��] public: __cdecl MovePlayerPacket::MovePlayerPacket(class Player & __ptr64,class Vec3 const & __ptr64) __ptr64
	// [����] ??0MovePlayerPacket@@QEAA@AEAVPlayer@@AEBVVec3@@@Z
	constexpr RVA MSSYM_B2QQE170MovePlayerPacketB2AAA4QEAAB1AE10AEAVPlayerB2AAA8AEBVVec3B3AAAA1Z = 0x002C1460;

	// [ԭ��] public: virtual void __cdecl ChestBlockActor::startOpen(class Player & __ptr64) __ptr64
	// [����] ?startOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z
	constexpr RVA MSSYM_B1QA9startOpenB1AE15ChestBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z = 0x007D15F0;

	// [ԭ��] public: virtual void __cdecl BarrelBlockActor::startOpen(class Player & __ptr64) __ptr64
	// [����] ?startOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z
	constexpr RVA MSSYM_B1QA9startOpenB1AE16BarrelBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z = 0x007BD370;

	// [ԭ��] public: virtual void __cdecl FurnaceBlockActor::startOpen(class Player & __ptr64) __ptr64
	// [����] ?startOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z
	constexpr RVA MSSYM_B1QA9startOpenB1AE17FurnaceBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z = 0x007DC690;

	// [ԭ��] public: virtual void __cdecl ChestBlockActor::stopOpen(class Player & __ptr64) __ptr64
	// [����] ?stopOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z
	constexpr RVA MSSYM_B1QA8stopOpenB1AE15ChestBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z = 0x007D1920;

	// [ԭ��] public: virtual void __cdecl BarrelBlockActor::stopOpen(class Player & __ptr64) __ptr64
	// [����] ?stopOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z
	constexpr RVA MSSYM_B1QA8stopOpenB1AE16BarrelBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z = 0x007BD4E0;

	// [ԭ��] public: virtual void __cdecl FurnaceBlockActor::stopOpen(class Player & __ptr64) __ptr64
	// [����] ?stopOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z
	constexpr RVA MSSYM_B1QA8stopOpenB1AE17FurnaceBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z = 0x007DC6E0;

	// [ԭ��] public: void __cdecl BlockEventCoordinator::sendBlockPlacedByPlayer(class Player & __ptr64,class Block const & __ptr64,class BlockPos const & __ptr64,bool) __ptr64
	// [����] ?sendBlockPlacedByPlayer@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
	constexpr RVA MSSYM_B1QE23sendBlockPlacedByPlayerB1AE21BlockEventCoordinatorB2AAE15QEAAXAEAVPlayerB2AAA9AEBVBlockB2AAE12AEBVBlockPosB3AAUA1NB1AA1Z = 0x006B4400;

	// [ԭ��] public: virtual enum EventResult __cdecl BlockEventListener::onBlockPlacedByPlayer(class Player & __ptr64,class Block const & __ptr64,class BlockPos const & __ptr64,bool) __ptr64
	// [����] ?onBlockPlacedByPlayer@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
	constexpr RVA MSSYM_B1QE21onBlockPlacedByPlayerB1AE18BlockEventListenerB2AAA4UEAAB1QE14AW4EventResultB2AAE10AEAVPlayerB2AAA9AEBVBlockB2AAE12AEBVBlockPosB3AAUA1NB1AA1Z = 0x00117330;

	// [ԭ��] public: virtual enum EventResult __cdecl VanillaServerGameplayEventListener::onBlockPlacedByPlayer(class Player & __ptr64,class Block const & __ptr64,class BlockPos const & __ptr64,bool) __ptr64
	// [����] ?onBlockPlacedByPlayer@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
	constexpr RVA MSSYM_B1QE21onBlockPlacedByPlayerB1AE34VanillaServerGameplayEventListenerB2AAA4UEAAB1QE14AW4EventResultB2AAE10AEAVPlayerB2AAA9AEBVBlockB2AAE12AEBVBlockPosB3AAUA1NB1AA1Z = 0x00AC6470;

	// [ԭ��] public: virtual enum EventResult __cdecl ScriptServerBlockEventListener::onBlockPlacedByPlayer(class Player & __ptr64,class Block const & __ptr64,class BlockPos const & __ptr64,bool) __ptr64
	// [����] ?onBlockPlacedByPlayer@ScriptServerBlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
	constexpr RVA MSSYM_B1QE21onBlockPlacedByPlayerB1AE30ScriptServerBlockEventListenerB2AAA4UEAAB1QE14AW4EventResultB2AAE10AEAVPlayerB2AAA9AEBVBlockB2AAE12AEBVBlockPosB3AAUA1NB1AA1Z = 0x004067C0;

	// [ԭ��] public: virtual bool __cdecl GameMode::useItemOn(class ItemStack & __ptr64,class BlockPos const & __ptr64,unsigned char,class Vec3 const & __ptr64,class Block const * __ptr64) __ptr64
	// [����] ?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z
	constexpr RVA MSSYM_B1QA9useItemOnB1AA8GameModeB2AAA4UEAAB1UE14NAEAVItemStackB2AAE12AEBVBlockPosB2AAA9EAEBVVec3B2AAA9PEBVBlockB3AAAA1Z = 0x006C8660;

	// [ԭ��] public: virtual void __cdecl LevelContainerManagerModel::setSlot(int,struct ContainerItemStack const & __ptr64,bool) __ptr64
	// [����] ?setSlot@LevelContainerManagerModel@@UEAAXHAEBUContainerItemStack@@_N@Z
	constexpr RVA MSSYM_B1QA7setSlotB1AE26LevelContainerManagerModelB2AAE28UEAAXHAEBUContainerItemStackB3AAUA1NB1AA1Z = 0x006AA870;

	// [ԭ��] public: short __cdecl ItemStackBase::getId(void)const __ptr64
	// [����] ?getId@ItemStackBase@@QEBAFXZ
	constexpr RVA MSSYM_B1QA5getIdB1AE13ItemStackBaseB2AAA7QEBAFXZ = 0x007313D0;

	// [ԭ��] public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl ItemStackBase::getName(void)const __ptr64
	// [����] ?getName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
	constexpr RVA MSSYM_B1QA7getNameB1AE13ItemStackBaseB2AAA4QEBAB1QA2AVB2QDA5basicB1UA6stringB1AA2DUB2QDA4charB1UA6traitsB1AA1DB1AA3stdB2AAA1VB2QDA9allocatorB1AA1DB1AA12B2AAA3stdB2AAA2XZ = 0x00731030;

	// [ԭ��] public: int __cdecl ContainerItemStack::getCount(void)const __ptr64
	// [����] ?getCount@ContainerItemStack@@QEBAHXZ
	constexpr RVA MSSYM_B1QA8getCountB1AE18ContainerItemStackB2AAA7QEBAHXZ = 0x0069C220;

	// [ԭ��] private: bool __cdecl GameMode::_destroyBlockInternal(class BlockPos const & __ptr64,unsigned char) __ptr64
	// [����] ?_destroyBlockInternal@GameMode@@AEAA_NAEBVBlockPos@@E@Z
	constexpr RVA MSSYM_B2QUE20destroyBlockInternalB1AA8GameModeB2AAA4AEAAB1UE13NAEBVBlockPosB2AAA1EB1AA1Z = 0x006C6D00;

	// [ԭ��] public: class Block const & __ptr64 __cdecl BlockSource::getBlock(class BlockPos const & __ptr64)const __ptr64
	// [����] ?getBlock@BlockSource@@QEBAAEBVBlock@@AEBVBlockPos@@@Z
	constexpr RVA MSSYM_B1QA8getBlockB1AE11BlockSourceB2AAE13QEBAAEBVBlockB2AAE12AEBVBlockPosB3AAAA1Z = 0x00915970;

	// [ԭ��] public: virtual void __cdecl Mob::die(class ActorDamageSource const & __ptr64) __ptr64
	// [����] ?die@Mob@@UEAAXAEBVActorDamageSource@@@Z
	constexpr RVA MSSYM_B1QA3dieB1AA3MobB2AAE26UEAAXAEBVActorDamageSourceB3AAAA1Z = 0x00644310;

	// [ԭ��] public: class Actor * __ptr64 __cdecl Level::fetchEntity(struct ActorUniqueID,bool)const __ptr64
	// [����] ?fetchEntity@Level@@QEBAPEAVActor@@UActorUniqueID@@_N@Z
	constexpr RVA MSSYM_B1QE11fetchEntityB1AA5LevelB2AAE13QEBAPEAVActorB2AAE14UActorUniqueIDB3AAUA1NB1AA1Z = 0x00968740;

}

// �ļ�����
