// Object: AIPhysicsDrivenAnimationEntityData
// ClassId: 2013
// RuntimeId: 12936
// TypeInfo: 0x0000000144C11D80
#include "../Entity/EntityData.h"
#include "../BattleAIShared/AIPhysicsDrivenAnimationBinding.h"
#include "../BattleAIShared/AISharedBinding.h"
#include "../BattleAIShared/AIInputBinding.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIPhysicsDrivenAnimationEntityData : public Entity::EntityData {
        BattleAIShared::AIPhysicsDrivenAnimationBinding Bindings; // 0x20
        BattleAIShared::AISharedBinding LocoSharedBindings; // 0x160
        BattleAIShared::AIInputBinding InputBindings; // 0x188
        Int32 MoveSpeedState; // 0x228
        Float32 RotationSpeed; // 0x22C
        Float32 StartDecelDistance; // 0x230
        char pad_0x234[0xC];
        Core::Vec3 TargetPosition; // 0x240
        Float32 Acceleration; // 0x250
        Float32 Deceleration; // 0x254
        Float32 EnterCoverDistance; // 0x258
        Float32 RotateToCoverDistance; // 0x25C
        Float32 RotateToScenarioDistance; // 0x260
        Float32 FaceNextWaypointDistance; // 0x264
        Float32 UpwardSlopeVelocityLowerRange; // 0x268
        Float32 UpwardSlopeVelocityUpperRange; // 0x26C
        Float32 UpwardSlopeSpeedMultiplierLowerBounds; // 0x270
        Float32 UpwardSlopeSpeedMultiplierUpperBounds; // 0x274
        Boolean Enable; // 0x278
        Boolean ForceSetTransform; // 0x279
        Boolean EnableTargetTracking; // 0x27A
        char pad_0x27B[0x5];
    }; // 0x280
    static_assert(sizeof(AIPhysicsDrivenAnimationEntityData) == 0x280);
}
#pragma pack(pop)