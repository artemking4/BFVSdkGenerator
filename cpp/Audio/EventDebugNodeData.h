// Object: EventDebugNodeData
// ClassId: 989
// RuntimeId: 9060
// TypeInfo: 0x0000000144E1A2C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/DebugEventInput.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class EventDebugNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::DebugEventInput> Events; // 0x18
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(EventDebugNodeData) == 0x28);
}
#pragma pack(pop)