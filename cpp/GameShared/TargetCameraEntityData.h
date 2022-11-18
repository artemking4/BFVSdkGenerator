// Object: TargetCameraEntityData
// ClassId: 3275
// RuntimeId: 40437
// TypeInfo: 0x0000000144E83440
#include "../GameShared/CameraEntityBaseData.h"
#include "../GameShared/TargetCameraData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class TargetCameraEntityData : public GameShared::CameraEntityBaseData {
        Core::LinearTransform OffsetTransform; // 0xB0
        GameShared::TargetCameraData Camera; // 0xF0
        Float32 FOV; // 0xF8
        char pad_0xFC[0x4];
    }; // 0x100
    static_assert(sizeof(TargetCameraEntityData) == 0x100);
}
#pragma pack(pop)