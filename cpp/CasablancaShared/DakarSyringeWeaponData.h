// Object: DakarSyringeWeaponData
// ClassId: 5200
// RuntimeId: 3928
// TypeInfo: 0x0000000144D3FD50
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/DefibrillatorUpgradeWeaponData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarSyringeWeaponData : public CasablancaShared::BFWeaponData {
        Float32 AttackTime; // 0x28
        Float32 FullHealthTime; // 0x2C
        Float32 InitialStartHealth; // 0x30
        Float32 MaxAngleToVictimXZ; // 0x34
        Float32 DefibActionCooldownTime; // 0x38
        Float32 DamageMinimumValue; // 0x3C
        Float32 DamageMaximumValue; // 0x40
        char pad_0x44[0x4];
        CasablancaShared::DefibrillatorUpgradeWeaponData UpgradeWeaponData; // 0x48
    }; // 0x60
    static_assert(sizeof(DakarSyringeWeaponData) == 0x60);
}
#pragma pack(pop)