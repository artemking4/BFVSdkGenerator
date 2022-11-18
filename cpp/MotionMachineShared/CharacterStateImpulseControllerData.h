// Object: CharacterStateImpulseControllerData
// ClassId: 1343
// RuntimeId: 13799
// TypeInfo: 0x0000000144EF3C20
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../Global/Boolean.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/IntChannelData.h"
#include "../Ant/AntRef.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateImpulseControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Float32 BaseImpulseMagnitude; // 0x38
        Float32 AirTweaker; // 0x3C
        MotionMachineShared::FloatChannelData ImpulseModifier; // 0x40
        MotionMachineShared::BoolChannelData ImpulseTrigger; // 0x48
        MotionMachineShared::TransformChannelData CurrentTransformChannel; // 0x50
        MotionMachineShared::TransformChannelData CurrentTargetTransformChannel; // 0x58
        MotionMachineShared::Vec3ChannelData Acceleration; // 0x60
        MotionMachineShared::IntChannelData OffsetIndexChannel; // 0x68
        Array<Float32> IndexedOffset; // 0x70
        Ant::AntRef AntController; // 0x78
        Int32 ImpulseDurationTicks; // 0x8C
        Boolean InvertImpulseTriggerChannel; // 0x90
        char pad_0x91[0x7];
    }; // 0x98
    static_assert(sizeof(CharacterStateImpulseControllerData) == 0x98);
}
#pragma pack(pop)