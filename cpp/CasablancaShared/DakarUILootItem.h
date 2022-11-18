// Object: DakarUILootItem
// ClassId: 1492
// RuntimeId: 12330
// TypeInfo: 0x0000000144D663F0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../SoldierShared/SharedAmmoType.h"
#include "../CasablancaShared/DakarLootInteractType.h"
#include "../CasablancaShared/LootPickupType.h"
#include "../CasablancaShared/BFUIUnlockObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarUILootItem : public Core::DataContainer {
        Int32 PickupTier; // 0x18
        Int32 PickupValue; // 0x1C
        SoldierShared::SharedAmmoType AmmoType; // 0x20
        CasablancaShared::DakarLootInteractType InteractType; // 0x24
        CasablancaShared::LootPickupType PickupType; // 0x28
        char pad_0x2C[0x4];
        CasablancaShared::BFUIUnlockObject UnlockObject; // 0x30
        Array<CasablancaShared::BFUIUnlockObject> Attachments; // 0x38
    }; // 0x40
    static_assert(sizeof(DakarUILootItem) == 0x40);
}
#pragma pack(pop)