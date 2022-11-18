// Object: DropLootComponentData
// ClassId: 1760
// RuntimeId: 15572
// TypeInfo: 0x0000000144D01B20
#include "../Entity/GameComponentData.h"
#include "../CasablancaShared/LootItemEntityAsset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../WeaponShared/WeaponSlot.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/ArmorVestLootItemEntityAsset.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DropLootComponentData : public Entity::GameComponentData {
        CasablancaShared::LootItemEntityAsset WeaponPickupLootItem; // 0x80
        CasablancaShared::LootItemEntityAsset GadgetPickupLootItem; // 0x88
        CasablancaShared::LootItemEntityAsset HealthPickupLootItem; // 0x90
        CasablancaShared::LootItemEntityAsset ThrowablePickupLootItem; // 0x98
        CasablancaShared::LootItemEntityAsset SidearmPickupLootItem; // 0xA0
        CasablancaShared::LootItemEntityAsset PistolPickupLootItem; // 0xA8
        CasablancaShared::LootItemEntityAsset SmgPickupLootItem; // 0xB0
        CasablancaShared::LootItemEntityAsset LmgPickupLootItem; // 0xB8
        CasablancaShared::LootItemEntityAsset RiflePickupLootItem; // 0xC0
        CasablancaShared::LootItemEntityAsset ShotgunPickupLootItem; // 0xC8
        CasablancaShared::LootItemEntityAsset SniperPickupLootItem; // 0xD0
        Array<CasablancaShared::LootItemEntityAsset> GroupLootItem; // 0xD8
        Float32 DropVelocity; // 0xE0
        char pad_0xE4[0x4];
        Array<WeaponShared::WeaponSlot> ExcludedWeaponSlots; // 0xE8
        Entity::ObjectBlueprint LootGroupBlueprint; // 0xF0
        Int32 MaximumDroppedLootGroups; // 0xF8
        char pad_0xFC[0x4];
        CasablancaShared::ArmorVestLootItemEntityAsset InitialArmorVestData; // 0x100
        Boolean EnableGrouping; // 0x108
        char pad_0x109[0x7];
    }; // 0x110
    static_assert(sizeof(DropLootComponentData) == 0x110);
}
#pragma pack(pop)