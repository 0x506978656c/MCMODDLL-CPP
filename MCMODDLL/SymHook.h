// ���ļ�������PDB�������ɡ�
// ע�⣺
// �����κ�ķ���ԭ�Ϳ������󣬽����ο���
// �����ķ��Ž������Ӧ��md5ֵ��ʾ�÷��Ŷ�Ӧ�ı�ʶ����
#pragma once

namespace SymHook{
	using RVA = unsigned int;

	// [ԭ��] private: static class std::unordered_map<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class SharedPtr<class BlockLegacy>,struct std::hash<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,struct std::equal_to<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class SharedPtr<class BlockLegacy> > > > BlockTypeRegistry::mBlockLookupMap
	// [����] ?mBlockLookupMap@BlockTypeRegistry@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VBlockLegacy@@@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VBlockLegacy@@@@@std@@@2@@std@@A
	constexpr RVA MSSYM_MD5_ceb8b47184006e4d7622b39978535236 = 0x01277910;

	// [ԭ��] void __cdecl VanillaBlockTypes::registerBlocks(void)
	// [����] ?registerBlocks@VanillaBlockTypes@@YAXXZ
	constexpr RVA MSSYM_B1QE14registerBlocksB1AE17VanillaBlockTypesB2AAA5YAXXZ = 0x0077DB30;

	// [ԭ��] public: short __cdecl BlockLegacy::getBlockItemId(void)const __ptr64
	// [����] ?getBlockItemId@BlockLegacy@@QEBAFXZ
	constexpr RVA MSSYM_B1QE14getBlockItemIdB1AE11BlockLegacyB2AAA7QEBAFXZ = 0x0071FDE0;

	// [ԭ��] public: virtual void __cdecl BlockLegacy::playerDestroy(class Player & __ptr64,class BlockPos const & __ptr64,class Block const & __ptr64)const __ptr64
	// [����] ?playerDestroy@BlockLegacy@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
	constexpr RVA MSSYM_B1QE13playerDestroyB1AE11BlockLegacyB2AAE15UEBAXAEAVPlayerB2AAE12AEBVBlockPosB2AAA9AEBVBlockB3AAAA1Z = 0x0071EA20;

	// [ԭ��] public: class BlockLegacy const & __ptr64 __cdecl Block::getLegacyBlock(void)const __ptr64
	// [����] ?getLegacyBlock@Block@@QEBAAEBVBlockLegacy@@XZ
	constexpr RVA MSSYM_B1QE14getLegacyBlockB1AA5BlockB2AAE19QEBAAEBVBlockLegacyB2AAA2XZ = 0x00059940;

	// [ԭ��] public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __ptr64 __cdecl Actor::getNameTag(void)const __ptr64
	// [����] ?getNameTag@Actor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
	constexpr RVA MSSYM_B1QE10getNameTagB1AA5ActorB2AAA8UEBAAEBVB2QDA5basicB1UA6stringB1AA2DUB2QDA4charB1UA6traitsB1AA1DB1AA3stdB2AAA1VB2QDA9allocatorB1AA1DB1AA12B2AAA3stdB2AAA2XZ = 0x003E6C30;

	// [ԭ��] public: virtual class AutomaticID<class Dimension,int> __cdecl Actor::getDimensionId(void)const __ptr64
	// [����] ?getDimensionId@Actor@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
	constexpr RVA MSSYM_B1QE14getDimensionIdB1AA5ActorB2AAA4UEBAB1QA2AVB2QDE11AutomaticIDB1AE10VDimensionB2AAA1HB2AAA2XZ = 0x003EBD70;

	// [ԭ��] public: virtual void __cdecl ChestBlockActor::startOpen(class Player & __ptr64) __ptr64
	// [����] ?startOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z
	constexpr RVA MSSYM_B1QA9startOpenB1AE15ChestBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z = 0x006EB400;

	// [ԭ��] public: virtual void __cdecl BarrelBlockActor::startOpen(class Player & __ptr64) __ptr64
	// [����] ?startOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z
	constexpr RVA MSSYM_B1QA9startOpenB1AE16BarrelBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z = 0x006D4780;

	// [ԭ��] public: virtual void __cdecl FurnaceBlockActor::startOpen(class Player & __ptr64) __ptr64
	// [����] ?startOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z
	constexpr RVA MSSYM_B1QA9startOpenB1AE17FurnaceBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z = 0x006F84E0;

	// [ԭ��] public: virtual void __cdecl ChestBlockActor::stopOpen(class Player & __ptr64) __ptr64
	// [����] ?stopOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z
	constexpr RVA MSSYM_B1QA8stopOpenB1AE15ChestBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z = 0x006EB730;

	// [ԭ��] public: virtual void __cdecl BarrelBlockActor::stopOpen(class Player & __ptr64) __ptr64
	// [����] ?stopOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z
	constexpr RVA MSSYM_B1QA8stopOpenB1AE16BarrelBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z = 0x006D48F0;

	// [ԭ��] public: virtual void __cdecl FurnaceBlockActor::stopOpen(class Player & __ptr64) __ptr64
	// [����] ?stopOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z
	constexpr RVA MSSYM_B1QA8stopOpenB1AE17FurnaceBlockActorB2AAE15UEAAXAEAVPlayerB3AAAA1Z = 0x006F8530;

	// [ԭ��] public: virtual enum EventResult __cdecl BlockEventListener::onBlockPlacedByPlayer(class Player & __ptr64,class Block const & __ptr64,class BlockPos const & __ptr64,bool) __ptr64
	// [����] ?onBlockPlacedByPlayer@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
	constexpr RVA MSSYM_B1QE21onBlockPlacedByPlayerB1AE18BlockEventListenerB2AAA4UEAAB1QE14AW4EventResultB2AAE10AEAVPlayerB2AAA9AEBVBlockB2AAE12AEBVBlockPosB3AAUA1NB1AA1Z = 0x0010EC10;

	// [ԭ��] public: virtual enum EventResult __cdecl VanillaServerGameplayEventListener::onBlockPlacedByPlayer(class Player & __ptr64,class Block const & __ptr64,class BlockPos const & __ptr64,bool) __ptr64
	// [����] ?onBlockPlacedByPlayer@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
	constexpr RVA MSSYM_B1QE21onBlockPlacedByPlayerB1AE34VanillaServerGameplayEventListenerB2AAA4UEAAB1QE14AW4EventResultB2AAE10AEAVPlayerB2AAA9AEBVBlockB2AAE12AEBVBlockPosB3AAUA1NB1AA1Z = 0x009B4460;

	// [ԭ��] public: virtual enum EventResult __cdecl ScriptServerBlockEventListener::onBlockPlacedByPlayer(class Player & __ptr64,class Block const & __ptr64,class BlockPos const & __ptr64,bool) __ptr64
	// [����] ?onBlockPlacedByPlayer@ScriptServerBlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
	constexpr RVA MSSYM_B1QE21onBlockPlacedByPlayerB1AE30ScriptServerBlockEventListenerB2AAA4UEAAB1QE14AW4EventResultB2AAE10AEAVPlayerB2AAA9AEBVBlockB2AAE12AEBVBlockPosB3AAUA1NB1AA1Z = 0x0035DA10;

	// [ԭ��] public: virtual void __cdecl LevelContainerManagerModel::setSlot(int,struct ContainerItemStack const & __ptr64) __ptr64
	// [����] ?setSlot@LevelContainerManagerModel@@UEAAXHAEBUContainerItemStack@@@Z
	constexpr RVA MSSYM_B1QA7setSlotB1AE26LevelContainerManagerModelB2AAE28UEAAXHAEBUContainerItemStackB3AAAA1Z = 0x005CC7E0;

	// [ԭ��] public: short __cdecl ItemStack::getId(void)const __ptr64
	// [����] ?getId@ItemStack@@QEBAFXZ
	constexpr RVA MSSYM_B1QA5getIdB1AA9ItemStackB2AAA7QEBAFXZ = 0x00646450;

	// [ԭ��] public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl ItemStack::getName(void)const __ptr64
	// [����] ?getName@ItemStack@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
	constexpr RVA MSSYM_B1QA7getNameB1AA9ItemStackB2AAA4QEBAB1QA2AVB2QDA5basicB1UA6stringB1AA2DUB2QDA4charB1UA6traitsB1AA1DB1AA3stdB2AAA1VB2QDA9allocatorB1AA1DB1AA12B2AAA3stdB2AAA2XZ = 0x006503A0;

	// [ԭ��] private: bool __cdecl GameMode::_destroyBlockInternal(class BlockPos const & __ptr64,unsigned char) __ptr64
	// [����] ?_destroyBlockInternal@GameMode@@AEAA_NAEBVBlockPos@@E@Z
	constexpr RVA MSSYM_B2QUE20destroyBlockInternalB1AA8GameModeB2AAA4AEAAB1UE13NAEBVBlockPosB2AAA1EB1AA1Z = 0x005E24F0;

	// [ԭ��] public: class Block const & __ptr64 __cdecl BlockSource::getBlock(class BlockPos const & __ptr64)const __ptr64
	// [����] ?getBlock@BlockSource@@QEBAAEBVBlock@@AEBVBlockPos@@@Z
	constexpr RVA MSSYM_B1QA8getBlockB1AE11BlockSourceB2AAE13QEBAAEBVBlockB2AAE12AEBVBlockPosB3AAAA1Z = 0x00806B00;

}

// �ļ�����
