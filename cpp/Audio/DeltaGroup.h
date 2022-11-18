// Object: DeltaGroup
// ClassId: 1128
// RuntimeId: 64671
// TypeInfo: 0x0000000144E1A240
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class DeltaGroup : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Delta; // 0x20
    }; // 0x28
    static_assert(sizeof(DeltaGroup) == 0x28);
}
#pragma pack(pop)