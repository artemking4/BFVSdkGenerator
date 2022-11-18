// Object: UIDakarInventoryEntityData
// ClassId: 3624
// RuntimeId: 43656
// TypeInfo: 0x0000000144D1F3F0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDakarInventoryEntityData : public Entity::EntityData {
        Int32 CurrentSlotSelection; // 0x20
        Int32 CurrentWeaponGadgetSelection; // 0x24
        Int32 CurrentAmmoSelection; // 0x28
        Int32 CurrentExpandedSlotSelection; // 0x2C
        Float32 NormalisedDropBarValue; // 0x30
        Int32 InteractionAmmoTypeIndex; // 0x34
        Int32 InteractionAmmoAmount; // 0x38
        char pad_0x3C[0x4];
        CasablancaShared::BFUIPlayerObject Player; // 0x40
    }; // 0x48
    static_assert(sizeof(UIDakarInventoryEntityData) == 0x48);
}
#pragma pack(pop)