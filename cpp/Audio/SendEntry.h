// Object: SendEntry
// ClassId: 1164
// RuntimeId: 7348
// TypeInfo: 0x0000000144E187C0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/AudioGraphParameter.h"

#pragma pack(push, 8)
namespace Audio {
    class SendEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphParameter Target; // 0x20
    }; // 0x28
    static_assert(sizeof(SendEntry) == 0x28);
}
#pragma pack(pop)