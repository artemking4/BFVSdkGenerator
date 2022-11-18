// Object: CameraRelativeControlData
// ClassId: 1286
// RuntimeId: 35049
// TypeInfo: 0x0000000144E8CD50
#include "../Core/DataContainer.h"
#include "../GameShared/CameraRelativeControlEnum.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../GameShared/CameraRelativeControlPerSpeedData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraRelativeControlData : public Core::DataContainer {
        GameShared::CameraRelativeControlEnum CameraRelativeControl; // 0x18
        Int32 CameraRelativeControl_Forward; // 0x1C
        Int32 CameraRelativeControl_Back; // 0x20
        Int32 CameraRelativeControl_Strafe; // 0x24
        Int32 ForcedMovingBodyWorldSpaceLock; // 0x28
        char pad_0x2C[0x4];
        Array<GameShared::CameraRelativeControlPerSpeedData> SpeedRelativeData; // 0x30
        Int32 ThrottleOutput; // 0x38
        Int32 BrakeOutput; // 0x3C
        Int32 YawOutput; // 0x40
        Int32 PitchOutput; // 0x44
        Int32 ForceAlignYawInputHint; // 0x48
        Float32 ForceAlignYawInputThreshold; // 0x4C
        Float32 ForceAlignYawNoInputThreshold; // 0x50
        Float32 ForceAlignYawThresholdPow; // 0x54
        Float32 ForceAlignYawAngleOffset; // 0x58
        Int32 ForceAlignPitchInputHint; // 0x5C
        Float32 ForceAlignPitchInputThreshold; // 0x60
        Float32 ForceAlignPitchNoInputThreshold; // 0x64
        Float32 ForceAlignPitchThresholdPow; // 0x68
        Float32 ForceAlignPitchAngleOffset; // 0x6C
        Boolean CombineWithNonRelativeControls; // 0x70
        Boolean UseCameraComponentTransform; // 0x71
        Boolean RearFacingCamera; // 0x72
        Boolean VehicleRelativeForward; // 0x73
        Boolean VehicleRelativeStrafe; // 0x74
        Boolean InvertedYawInReverse; // 0x75
        Boolean ForceAlignYawWithCamera; // 0x76
        Boolean ForceAlignPitchWithCamera; // 0x77
        Boolean RespectSquareInputMappings; // 0x78
        char pad_0x79[0x7];
    }; // 0x80
    static_assert(sizeof(CameraRelativeControlData) == 0x80);
}
#pragma pack(pop)