// Object: CharacterStateTransitionControllerData
// ClassId: 1366
// RuntimeId: 52428
// TypeInfo: 0x0000000144EFBA30
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Global/Uint32.h"
#include "../MotionMachineShared/CharacterStateTransitionPhaseMode.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/CharacterStateKeyframedChannelControllerData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateTransitionControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Uint32 BlendTime; // 0x38
        Uint32 PhysicsBlendTime; // 0x3C
        MotionMachineShared::CharacterStateTransitionPhaseMode PhaseMode; // 0x40
        Float32 ToPhase; // 0x44
        MotionMachineShared::FloatChannelData ToPhaseChannel; // 0x48
        Array<MotionMachineShared::CharacterStateKeyframedChannelControllerData> ChannelControllers; // 0x50
        Ant::AntRef Controller; // 0x58
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(CharacterStateTransitionControllerData) == 0x70);
}
#pragma pack(pop)