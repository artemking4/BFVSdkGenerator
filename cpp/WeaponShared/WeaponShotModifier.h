// Object: WeaponShotModifier
// ClassId: 5684
// RuntimeId: 62300
// TypeInfo: 0x0000000144F7A7E0
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace WeaponShared {
    class WeaponShotModifier : public WeaponShared::WeaponModifierDynamicBase {
        Core::Vec3 InitialPosition; // 0x20
        Core::Vec3 CameraSpawnOffset; // 0x30
        Core::Vec3 InitialDirection; // 0x40
        Core::Vec3 InitialSpeed; // 0x50
        Int32 NumberOfBulletsPerShell; // 0x60
        char pad_0x64[0xC];
    }; // 0x70
    static_assert(sizeof(WeaponShotModifier) == 0x70);
}
#pragma pack(pop)