// Object: LockingWeaponData
// ClassId: 5207
// RuntimeId: 53102
// TypeInfo: 0x0000000144D3F9D0
#include "../CasablancaShared/BFWeaponData.h"
#include "../WeaponShared/LockingControllerData.h"
#include "../Global/Boolean.h"
#include "../WeaponShared/WarnTarget.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LockingWeaponData : public CasablancaShared::BFWeaponData {
        WeaponShared::LockingControllerData LockingController; // 0x28
        WeaponShared::LockingControllerData SecondaryLockingController; // 0x30
        WeaponShared::WarnTarget WarnLock; // 0x38
        Boolean OverrideLockingControllerSettings; // 0x3C
        Boolean IsHoming; // 0x3D
        Boolean IsGuided; // 0x3E
        Boolean IsGuidedWhenZoomed; // 0x3F
        Boolean IsGuidedHoming; // 0x40
        Boolean FireOnlyWhenLockedOn; // 0x41
        Boolean GuideOnlyWhenLockedOn; // 0x42
        char pad_0x43[0x5];
    }; // 0x48
    static_assert(sizeof(LockingWeaponData) == 0x48);
}
#pragma pack(pop)