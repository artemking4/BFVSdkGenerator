// Object: CharacterPhysicsAgilityPoseData
// ClassId: 1314
// RuntimeId: 12316
// TypeInfo: 0x0000000144F0FE80
#include "../Core/DataContainer.h"
#include "../Physics/CharacterPoseType.h"
#include "../Physics/PoseTransitionTime.h"

#pragma pack(push, 8)
namespace Physics {
    class CharacterPhysicsAgilityPoseData : public Core::DataContainer {
        Physics::CharacterPoseType PoseType; // 0x18
        char pad_0x1C[0x4];
        Array<Physics::PoseTransitionTime> TransitionTimes; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterPhysicsAgilityPoseData) == 0x28);
}
#pragma pack(pop)