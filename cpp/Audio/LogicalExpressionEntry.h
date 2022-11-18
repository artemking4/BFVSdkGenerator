// Object: LogicalExpressionEntry
// ClassId: 1143
// RuntimeId: 46802
// TypeInfo: 0x0000000144E19440
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class LogicalExpressionEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Trigger; // 0x18
    }; // 0x20
    static_assert(sizeof(LogicalExpressionEntry) == 0x20);
}
#pragma pack(pop)