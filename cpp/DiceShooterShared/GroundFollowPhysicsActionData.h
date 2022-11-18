// Object: GroundFollowPhysicsActionData
// ClassId: 2954
// RuntimeId: 24380
// TypeInfo: 0x0000000144DED2A0
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../DiceShooterShared/GroundSupportSettings.h"
#include "../DiceShooterShared/OnGroundSettings.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class GroundFollowPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        DiceShooterShared::GroundSupportSettings GroundSupportSettings; // 0x58
        DiceShooterShared::OnGroundSettings OnGroundSettings; // 0x88
        Float32 MaxJumpHeight; // 0xA8
        Float32 GravityModifierHint; // 0xAC
        Float32 MinJumpFwdSpeed; // 0xB0
        Float32 InputJump; // 0xB4
    }; // 0xB8
    static_assert(sizeof(GroundFollowPhysicsActionData) == 0xB8);
}
#pragma pack(pop)