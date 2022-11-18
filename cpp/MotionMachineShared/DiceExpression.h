// Object: DiceExpression
// ClassId: 1517
// RuntimeId: 43192
// TypeInfo: 0x0000000144EFA730
#include "../Core/DataContainer.h"
#include "../Global/TypeRef.h"
#include "../MotionMachineShared/StateListDescriptor.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class DiceExpression : public Core::DataContainer {
        TypeRef FunctionType; // 0x18
        MotionMachineShared::StateListDescriptor SyncedStateListDescriptor; // 0x20
        MotionMachineShared::StateListDescriptor PersistentStateListDescriptor; // 0x90
        MotionMachineShared::StateListDescriptor TemporaryStateListDescriptor; // 0x100
    }; // 0x170
    static_assert(sizeof(DiceExpression) == 0x170);
}
#pragma pack(pop)