// Object: SkeletonInputEntityData
// ClassId: 3217
// RuntimeId: 28761
// TypeInfo: 0x0000000144C4FBE0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SkeletonInputEntityData : public Entity::EntityData {
        Float32 LeanSideLevelOutSpeed; // 0x20
        Float32 LeanSideCenterDeadZoneSize; // 0x24
        Float32 LeanSideCenterDeadZoneScale; // 0x28
        Float32 LeanSideSensitivity; // 0x2C
        Float32 LeanSideRecalibrationTime; // 0x30
        Float32 LeanSideBlockStart; // 0x34
        Float32 LeanSideBlockEnd; // 0x38
        Float32 LeanSideBlockStartHeightOffset; // 0x3C
        Float32 HeadYawSensitivity; // 0x40
        Float32 HeadPitchSensitivity; // 0x44
        Float32 HeadSmoothingFactorMin; // 0x48
        Float32 HeadSmoothingFactorMax; // 0x4C
        Float32 HeadSmoothingFactorChangeLimit; // 0x50
        Boolean UseLeaning; // 0x54
        Boolean UseHeadTracking; // 0x55
        char pad_0x56[0x2];
    }; // 0x58
    static_assert(sizeof(SkeletonInputEntityData) == 0x58);
}
#pragma pack(pop)