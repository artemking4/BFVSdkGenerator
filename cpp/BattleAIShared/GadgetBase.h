// Object: GadgetBase
// ClassId: 356
// RuntimeId: 42621
// TypeInfo: 0x0000000144C13380
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

namespace BattleAIShared {
    class GadgetBase : public Core::DataContainerPolicyAsset {
        Float32 CooldownSelf; // 0x20
        Float32 CooldownTeam; // 0x24
        Float32 CooldownStartCombat; // 0x28
        Float32 CooldownSelfWhileInSquad; // 0x2C
        Float32 CooldownTeamWhileInSquad; // 0x30
        Float32 CooldownStartCombatWhileInSquad; // 0x34
        Float32 CooldownTimeScaleForShieldedTargets; // 0x38
        Boolean CanEvaluateInVehicle; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(GadgetBase) == 0x40);
}