// Object: MusicPlayerEntry
// ClassId: 1155
// RuntimeId: 34869
// TypeInfo: 0x0000000144E1CE40
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicPlayerEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
        Uint32 TargetNameHash; // 0x20
        Boolean IsEvent; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(MusicPlayerEntry) == 0x28);
}
#pragma pack(pop)