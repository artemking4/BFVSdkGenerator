// Object: BuffWeaponData
// ClassId: 5198
// RuntimeId: 18389
// TypeInfo: 0x0000000144D3F7D0
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BuffWeaponData : public CasablancaShared::BFWeaponData {
        Float32 ActionCooldownTime; // 0x28
        Float32 OverHealth; // 0x2C
        Float32 EnemyDamage; // 0x30
        Float32 DistributeHealingOverTime; // 0x34
        Float32 DistributeDamageOverTime; // 0x38
        Float32 MaxAttackRange; // 0x3C
        Float32 MaxAngleToTargetXZ; // 0x40
        Boolean ActionEnabled; // 0x44
        Boolean DecrementAmmoOnFriendlies; // 0x45
        Boolean DecrementAmmoOnEnemies; // 0x46
        char pad_0x47[0x1];
    }; // 0x48
    static_assert(sizeof(BuffWeaponData) == 0x48);
}
#pragma pack(pop)