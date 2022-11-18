// Object: ChargeEntityBaseData
// ClassId: 2469
// RuntimeId: 10948
// TypeInfo: 0x0000000144D03120
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/MeleeWeaponModifierData.h"
#include "../WeaponShared/WeaponUnlockAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ChargeEntityBaseData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 PrepareStateTime; // 0x24
        Float32 ChargeStateTime; // 0x28
        Float32 FailedStateTime; // 0x2C
        Float32 VelocityThreshold; // 0x30
        Float32 AttackDistance; // 0x34
        Float32 AttackAngle; // 0x38
        char pad_0x3C[0x4];
        CasablancaShared::MeleeWeaponModifierData Modifier; // 0x40
        WeaponShared::WeaponUnlockAsset UnlockAsset; // 0x48
        Boolean ChargeEnabled; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(ChargeEntityBaseData) == 0x58);
}
#pragma pack(pop)