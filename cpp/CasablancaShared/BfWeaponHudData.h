// Object: BfWeaponHudData
// ClassId: 4101
// RuntimeId: 10265
// TypeInfo: 0x0000000144D5A960
#include "../GameShared/HudData.h"
#include "../GameShared/LockingTypeAsset.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BfWeaponHudData : public GameShared::HudData {
        GameShared::LockingTypeAsset LockingType; // 0x18
        CString WeaponClass; // 0x20
        Float32 LowAmmoWarning; // 0x28
        Float32 CameraShakeModifier; // 0x2C
        CString HudIcon; // 0x30
    }; // 0x38
    static_assert(sizeof(BfWeaponHudData) == 0x38);
}
#pragma pack(pop)