// Object: ReceiveEntry
// ClassId: 1162
// RuntimeId: 22829
// TypeInfo: 0x0000000144E18BC0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/AudioGraphParameter.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class ReceiveEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Out; // 0x18
        Audio::AudioGraphParameter Source; // 0x20
        Float32 Parameter; // 0x28
        Float32 SavedValue; // 0x2C
    }; // 0x30
    static_assert(sizeof(ReceiveEntry) == 0x30);
}
#pragma pack(pop)