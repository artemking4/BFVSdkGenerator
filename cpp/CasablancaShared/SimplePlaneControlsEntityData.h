// Object: SimplePlaneControlsEntityData
// ClassId: 3211
// RuntimeId: 28389
// TypeInfo: 0x0000000144D35DB0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/FloatCurve.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class SimplePlaneControlsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform CameraTransformIn; // 0x30
        Float32 MaxYawAngle; // 0x70
        Float32 MaxPitchAngle; // 0x74
        Float32 AimDistance; // 0x78
        Float32 ControlFrameMaxYDiff; // 0x7C
        Float32 ControlFrameRubberBandStrength; // 0x80
        Float32 AngleDiffForMaxInputPitch; // 0x84
        Float32 MaxInputPitch; // 0x88
        Float32 AngleDiffForMaxInputYaw; // 0x8C
        Float32 NoYawAboveRollAngleDiff; // 0x90
        Float32 MaxInputYaw; // 0x94
        Core::FloatCurve InputYawCurve; // 0x98
        Float32 AngleDiffForMaxInputRoll; // 0xA0
        Float32 MaxInputRoll; // 0xA4
        Float32 MaxRollAngle; // 0xA8
        Float32 YawAngleDiffForMaxRollAngle; // 0xAC
        Float32 LevelOutStrengthLevelCamera; // 0xB0
        Float32 LevelOutStrengthRollingCamera; // 0xB4
        Boolean UseCameraLeft; // 0xB8
        Boolean SquarePitchInput; // 0xB9
        Boolean SquaredRollAngleCurve; // 0xBA
        Boolean RollingCamera; // 0xBB
        char pad_0xBC[0x4];
    }; // 0xC0
    static_assert(sizeof(SimplePlaneControlsEntityData) == 0xC0);
}
#pragma pack(pop)