// Object: CameraComponentData
// ClassId: 1734
// RuntimeId: 53156
// TypeInfo: 0x0000000144E8D7E0
#include "../Entity/GameComponentData.h"
#include "../GameShared/TargetCameraData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/AlternateCameraViewData.h"
#include "../GameShared/RegularCameraViewData.h"
#include "../GameShared/CameraRelativeControlData.h"
#include "../GameShared/SoldierAnimatedCameraData.h"
#include "../Core/Vec3.h"
#include "../Global/Uint32.h"
#include "../GameShared/StanceCameraData.h"
#include "../GameShared/CameraComponentSoundData.h"
#include "../Core/LinearTransform.h"
#include "../GameShared/ComponentCustomizationMetaData.h"

#pragma pack(push, 16)
namespace GameShared {
    class CameraComponentData : public Entity::GameComponentData {
        GameShared::RegularCameraViewData RegularView; // 0x80
        Core::Vec3 CameraTransitionPos; // 0xC0
        Core::LinearTransform OverrideTransform; // 0xD0
        GameShared::TargetCameraData Camera; // 0x110
        Float32 FieldOfView; // 0x118
        Float32 ForceFieldOfView; // 0x11C
        Float32 RegularViewFOVMultiplier; // 0x120
        Float32 AlternateViewFOVMultiplier; // 0x124
        GameShared::AlternateCameraViewData AlternateView; // 0x128
        Float32 OverrideFreelookPitch; // 0x130
        Float32 OverrideFreelookYaw; // 0x134
        GameShared::CameraRelativeControlData CameraRelativeControlConfig; // 0x138
        GameShared::CameraRelativeControlData OverrideCameraRelativeControlConfig; // 0x140
        Float32 FreezeHeight; // 0x148
        GameShared::SoldierAnimatedCameraData SoldierAnimatedCamera; // 0x14C
        Float32 CameraTransitionTime; // 0x154
        Uint32 MeshParentComponentNumber; // 0x158
        char pad_0x15C[0x4];
        GameShared::StanceCameraData StanceData; // 0x160
        GameShared::CameraComponentSoundData CameraSoundData; // 0x170
        GameShared::ComponentCustomizationMetaData MetaData; // 0x178
        Boolean EnableCameraMesh; // 0x180
        Boolean TransparentDepthTestEnable; // 0x181
        Boolean CastShadowEnable; // 0x182
        Boolean OverrideFreelookEnable; // 0x183
        Boolean AlternateViewEnabled; // 0x184
        Boolean IsFirstPerson; // 0x185
        Boolean ReceiveImpulsesAsThirdPerson; // 0x186
        Boolean UseCameraTransition; // 0x187
        Boolean UseOverrideTransform; // 0x188
        char pad_0x189[0x7];
    }; // 0x190
    static_assert(sizeof(CameraComponentData) == 0x190);
}
#pragma pack(pop)