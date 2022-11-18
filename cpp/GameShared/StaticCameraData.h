// Object: StaticCameraData
// ClassId: 1685
// RuntimeId: 36208
// TypeInfo: 0x0000000144E838C0
#include "../GameShared/TargetCameraData.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Physics/CameraLoosePartPhysicsData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace GameShared {
    class StaticCameraData : public GameShared::TargetCameraData {
        Array<Core::Vec3> LeftCurve; // 0x90
        Array<Core::Vec3> RightCurve; // 0x98
        Array<Core::Vec3> UpCurve; // 0xA0
        Array<Core::Vec3> DownCurve; // 0xA8
        Array<Physics::CameraLoosePartPhysicsData> LoosePartPhysics; // 0xB0
        Float32 LeftYawAngle; // 0xB8
        Float32 RightYawAngle; // 0xBC
        Float32 UpPitchAngle; // 0xC0
        Float32 DownPitchAngle; // 0xC4
        Int32 AverageFilterFrames; // 0xC8
        Int32 YawInputAction; // 0xCC
        Int32 PitchInputAction; // 0xD0
        Float32 WorldSpaceLockEfficiencyYaw; // 0xD4
        Float32 WorldSpaceLockEfficiencyYawAway; // 0xD8
        Float32 WorldSpaceLockEfficiencyPitch; // 0xDC
        Float32 YawSensitivityNonZoomed; // 0xE0
        Float32 YawSensitivityZoomed; // 0xE4
        Float32 PitchSensitivityNonZoomed; // 0xE8
        Float32 PitchSensitivityZoomed; // 0xEC
        Boolean MergeLeftAndRightCurves; // 0xF0
        Boolean MergeUpAndDownCurves; // 0xF1
        Boolean MirrorHorizontalCurves; // 0xF2
        Boolean MirrorVerticalCurves; // 0xF3
        Boolean AccumulateInput; // 0xF4
        Boolean ResetAccumulatedInputOnViewChange; // 0xF5
        char pad_0xF6[0xA];
    }; // 0x100
    static_assert(sizeof(StaticCameraData) == 0x100);
}
#pragma pack(pop)