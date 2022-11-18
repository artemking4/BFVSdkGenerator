// Object: ValueCurveNodeData
// ClassId: 1111
// RuntimeId: 15890
// TypeInfo: 0x0000000144E17D40
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/ValueCurveNodeEntry.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class ValueCurveNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::ValueCurveNodeEntry> Curves; // 0x18
        Audio::AudioGraphNodePort In; // 0x20
    }; // 0x28
    static_assert(sizeof(ValueCurveNodeData) == 0x28);
}
#pragma pack(pop)