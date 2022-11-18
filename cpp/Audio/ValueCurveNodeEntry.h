// Object: ValueCurveNodeEntry
// ClassId: 1169
// RuntimeId: 43516
// TypeInfo: 0x0000000144E17DC0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Core/FloatCurve.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class ValueCurveNodeEntry : public Audio::AudioGraphNodePortGroup {
        Core::FloatCurve Curve; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
    }; // 0x28
    static_assert(sizeof(ValueCurveNodeEntry) == 0x28);
}
#pragma pack(pop)