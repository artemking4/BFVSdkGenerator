// Object: DebugEventInput
// ClassId: 1126
// RuntimeId: 15322
// TypeInfo: 0x0000000144E1A340
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class DebugEventInput : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort E; // 0x18
        CString Name; // 0x20
        Boolean RequireTriggeredAndSet; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(DebugEventInput) == 0x30);
}
#pragma pack(pop)