// Object: DeMuxOutput
// ClassId: 1125
// RuntimeId: 53867
// TypeInfo: 0x0000000144E1A140
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class DeMuxOutput : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Trigger; // 0x18
    }; // 0x20
    static_assert(sizeof(DeMuxOutput) == 0x20);
}
#pragma pack(pop)