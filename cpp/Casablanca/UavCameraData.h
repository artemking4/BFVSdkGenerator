// Object: UavCameraData
// ClassId: 1686
// RuntimeId: 6436
// TypeInfo: 0x0000000144C7EB80
#include "../GameShared/TargetCameraData.h"
#include "../Global/Float32.h"
#include "../GameShared/CameraSineCurveData.h"
#include "../Casablanca/UavCameraPointData.h"

#pragma pack(push, 16)
namespace Casablanca {
    class UavCameraData : public GameShared::TargetCameraData {
        Float32 ViewDistance; // 0x90
        char pad_0x94[0x4];
        Array<GameShared::CameraSineCurveData> ViewDistanceCurve; // 0x98
        Float32 ViewAngle; // 0xA0
        char pad_0xA4[0x4];
        Array<GameShared::CameraSineCurveData> ViewAngleCurve; // 0xA8
        Float32 RotationSpeed; // 0xB0
        char pad_0xB4[0x4];
        Array<GameShared::CameraSineCurveData> RotationSpeedCurve; // 0xB8
        Float32 ZoomFov; // 0xC0
        Float32 ZoomDelay; // 0xC4
        Float32 ZoomTransitionTime; // 0xC8
        Float32 Fov; // 0xCC
        Casablanca::UavCameraPointData FocusPoint; // 0xD0
        Casablanca::UavCameraPointData CenterPoint; // 0xE0
        Float32 UpWeightDistance; // 0xF0
        char pad_0xF4[0xC];
    }; // 0x100
    static_assert(sizeof(UavCameraData) == 0x100);
}
#pragma pack(pop)