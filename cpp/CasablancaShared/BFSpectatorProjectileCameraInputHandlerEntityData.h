// Object: BFSpectatorProjectileCameraInputHandlerEntityData
// ClassId: 2136
// RuntimeId: 20849
// TypeInfo: 0x0000000144D42850
#include "../CasablancaShared/BFSpectatorInputHandlerEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorProjectileCameraInputHandlerEntityData : public CasablancaShared::BFSpectatorInputHandlerEntityData {
        Float32 CameraLinearDampening; // 0x28
        Float32 CameraAngularDampening; // 0x2C
        Float32 CameraFollowOffset; // 0x30
        Float32 ProjFollowHeightOffset; // 0x34
        Float32 CollisionWidthPadding; // 0x38
        Float32 CameraActiveTimeForStaticOrNonExplosiveTypes; // 0x3C
        Float32 CameraActiveTimeAfterProjDestroyed; // 0x40
        Float32 OrbitPitchDegrees; // 0x44
        Float32 OrbitPitchDampening; // 0x48
        Float32 OrbitYawSpeedDegrees; // 0x4C
        Float32 OrbitLinearSpeed; // 0x50
        Float32 OrbitCameraArmLength; // 0x54
        Float32 MinCameraArmLength; // 0x58
        Boolean UseWithExplosionPacksAndSupplySpheres; // 0x5C
        Boolean UseWithFlares; // 0x5D
        Boolean UseWithFlashbangs; // 0x5E
        Boolean ProjCameraInputIsToggle; // 0x5F
        Boolean ProjectileFollowInputHeld; // 0x60
        char pad_0x61[0x7];
    }; // 0x68
    static_assert(sizeof(BFSpectatorProjectileCameraInputHandlerEntityData) == 0x68);
}
#pragma pack(pop)