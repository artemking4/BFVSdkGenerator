// Object: CharacterPoseData
// ClassId: 1315
// RuntimeId: 2317
// TypeInfo: 0x0000000144F10600
#include "../Core/DataContainer.h"
#include "../Core/Vec3.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"
#include "../Physics/PoseTransitionTime.h"
#include "../Physics/LookConstraintsData.h"
#include "../Physics/CharacterPoseType.h"
#include "../Physics/CharacterPoseCollisionType.h"

#pragma pack(push, 16)
namespace Physics {
    class CharacterPoseData : public Core::DataContainer {
        Array<Core::Vec2> ThrottleModifierCurve; // 0x18
        Float32 StepHeight; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 EyePosition; // 0x30
        Core::Vec3 CollisionBoxMinExpand; // 0x40
        Core::Vec3 CollisionBoxMaxExpand; // 0x50
        Core::Vec3 RaycastOffset; // 0x60
        Float32 Height; // 0x70
        char pad_0x74[0x4];
        Array<Physics::PoseTransitionTime> TransitionTimes; // 0x78
        Physics::LookConstraintsData LookConstraints; // 0x80
        Physics::CharacterPoseType PoseType; // 0x90
        Physics::CharacterPoseCollisionType CollisionType; // 0x94
        Float32 RaycastRadiusPadding; // 0x98
        Float32 RaycastHeightPadding; // 0x9C
    }; // 0xA0
    static_assert(sizeof(CharacterPoseData) == 0xA0);
}
#pragma pack(pop)