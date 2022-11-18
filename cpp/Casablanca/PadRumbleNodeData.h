// Object: PadRumbleNodeData
// ClassId: 1068
// RuntimeId: 50467
// TypeInfo: 0x0000000144C1DD80
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Casablanca {
    class PadRumbleNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort RumbleHigh; // 0x18
        Audio::AudioGraphNodePort RumbleLow; // 0x20
    }; // 0x28
    static_assert(sizeof(PadRumbleNodeData) == 0x28);
}
#pragma pack(pop)