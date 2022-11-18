// Object: LogicalExpressionNodeData
// ClassId: 1030
// RuntimeId: 18350
// TypeInfo: 0x0000000144E193C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/LogicalExpressionEntry.h"
#include "../Audio/LogicalExpressionOperator.h"

#pragma pack(push, 8)
namespace Audio {
    class LogicalExpressionNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Reset; // 0x18
        Array<Audio::LogicalExpressionEntry> Inputs; // 0x20
        Audio::AudioGraphNodePort Trigger; // 0x28
        Audio::LogicalExpressionOperator Operator; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(LogicalExpressionNodeData) == 0x38);
}
#pragma pack(pop)