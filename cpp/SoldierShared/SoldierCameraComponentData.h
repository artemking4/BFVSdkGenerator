// Object: SoldierCameraComponentData
// ClassId: 1737
// RuntimeId: 10983
// TypeInfo: 0x0000000144F39C10
#include "../GameShared/CharacterCameraComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../SoldierShared/Camera1pBinding.h"
#include "../SoldierShared/CameraCommonBinding.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierCameraComponentData : public GameShared::CharacterCameraComponentData {
        Core::LinearTransform OverrideTransform; // 0x90
        Float32 ExplosionImpulseMultiplier; // 0xD0
        Float32 StrafeTiltStrength; // 0xD4
        Float32 PitchTiltStrength; // 0xD8
        Float32 StandCameraCullSqrDistance; // 0xDC
        Float32 CrouchCameraCullSqrDistance; // 0xE0
        Float32 ProneCameraCullSqrDistance; // 0xE4
        Float32 CameraCullSphereRadius; // 0xE8
        SoldierShared::Camera1pBinding Camera1pBinding; // 0xEC
        SoldierShared::CameraCommonBinding CameraCommonBinding; // 0x150
        Float32 ForceFieldOfView; // 0x178
        Float32 Roll; // 0x17C
        Boolean DisableAiming; // 0x180
        Boolean AuthoritativeEyePosition; // 0x181
        Boolean EnableCameraBobNonFirstPerson; // 0x182
        char pad_0x183[0xD];
    }; // 0x190
    static_assert(sizeof(SoldierCameraComponentData) == 0x190);
}
#pragma pack(pop)