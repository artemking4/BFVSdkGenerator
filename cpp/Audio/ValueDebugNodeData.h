// Object: ValueDebugNodeData
// ClassId: 1112
// RuntimeId: 54841
// TypeInfo: 0x0000000144E1A3C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/DebugValueInput.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class ValueDebugNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::DebugValueInput> Values; // 0x18
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(ValueDebugNodeData) == 0x28);
}
#pragma pack(pop)