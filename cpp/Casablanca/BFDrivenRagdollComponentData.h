// Object: BFDrivenRagdollComponentData
// ClassId: 1763
// RuntimeId: 23810
// TypeInfo: 0x0000000144C7D080
#include "../EACharacterPhysicsShared/EACharacterPhysicsComponentData.h"
#include "../Casablanca/BFDrivenRagdollComponentBinding.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../MotionMachineShared/BoolChannelData.h"

#pragma pack(push, 16)
namespace Casablanca {
    class BFDrivenRagdollComponentData : public EACharacterPhysicsShared::EACharacterPhysicsComponentData {
        Casablanca::BFDrivenRagdollComponentBinding BFDrivenRagdollBinding; // 0xB0
        Float32 MaxImpulse; // 0x128
        Uint32 ImpulseLifetime; // 0x12C
        Float32 SettleMomentum; // 0x130
        Float32 CullingDistanceForOutputs; // 0x134
        Float32 SpeedThresholdForOutputs; // 0x138
        char pad_0x13C[0x4];
        MotionMachineShared::BoolChannelData CharacterDeadAndSettledChannel; // 0x140
        Uint32 HipsBodyIndex; // 0x148
        Uint32 SpineBodyIndex; // 0x14C
        Uint32 LeftArmBodyIndex; // 0x150
        Uint32 LeftForeArmBodyIndex; // 0x154
        Uint32 LeftHandBodyIndex; // 0x158
        Uint32 HeadBodyIndex; // 0x15C
        Uint32 RightArmBodyIndex; // 0x160
        Uint32 RightForeArmBodyIndex; // 0x164
        Uint32 RightHandBodyIndex; // 0x168
        Uint32 LeftUpLegBodyIndex; // 0x16C
        Uint32 LeftLegBodyIndex; // 0x170
        Uint32 LeftFootBodyIndex; // 0x174
        Uint32 RightUpLegBodyIndex; // 0x178
        Uint32 RightLegBodyIndex; // 0x17C
        Uint32 RightFootBodyIndex; // 0x180
        char pad_0x184[0xC];
    }; // 0x190
    static_assert(sizeof(BFDrivenRagdollComponentData) == 0x190);
}
#pragma pack(pop)