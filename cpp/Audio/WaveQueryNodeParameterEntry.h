// Object: WaveQueryNodeParameterEntry
// ClassId: 1171
// RuntimeId: 45357
// TypeInfo: 0x0000000144E022F0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class WaveQueryNodeParameterEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort SelectionParam; // 0x18
        Uint32 ParameterNameHash; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WaveQueryNodeParameterEntry) == 0x28);
}
#pragma pack(pop)