// Object: VehicleCameraData
// ClassId: 1687
// RuntimeId: 27106
// TypeInfo: 0x0000000144E83840
#include "../GameShared/TargetCameraData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehicleCameraData : public GameShared::TargetCameraData {
        Core::Vec3 MoveToPosition; // 0x90
        Core::Vec3 MoveToPositionSlopeFactor; // 0xA0
        Core::Vec3 TargetOffset; // 0xB0
        Core::Vec3 TargetOffsetSlopeFactor; // 0xC0
        Core::Vec3 RotationFactor; // 0xD0
        Float32 PositionFactor; // 0xE0
        Float32 ResetDistance; // 0xE4
        Boolean FixedPosition; // 0xE8
        Boolean FixedAngleZ; // 0xE9
        Boolean UseTerrainAdjustment; // 0xEA
        char pad_0xEB[0x5];
    }; // 0xF0
    static_assert(sizeof(VehicleCameraData) == 0xF0);
}
#pragma pack(pop)