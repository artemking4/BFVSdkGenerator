// Object: DamageAreaCharacterPoseOverride
// ClassId: 1494
// RuntimeId: 31457
// TypeInfo: 0x0000000144E8EB60
#include "../Core/DataContainer.h"
#include "../GameShared/DamageAreaPoses.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class DamageAreaCharacterPoseOverride : public Core::DataContainer {
        GameShared::DamageAreaPoses Pose; // 0x18
        Float32 DamagePerSecondOverride; // 0x1C
    }; // 0x20
    static_assert(sizeof(DamageAreaCharacterPoseOverride) == 0x20);
}
#pragma pack(pop)