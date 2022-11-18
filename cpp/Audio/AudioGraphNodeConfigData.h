// Object: AudioGraphNodeConfigData
// ClassId: 923
// RuntimeId: 30634
// TypeInfo: 0x0000000144E17940
#include "../Core/DataContainer.h"
#include "../Audio/AudioGraphNodeData.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace Audio {
    class AudioGraphNodeConfigData : public Core::DataContainer {
        Uint64 ConfiguredPropertyFlags; // 0x18
        Audio::AudioGraphNodeData Node; // 0x20
    }; // 0x28
    static_assert(sizeof(AudioGraphNodeConfigData) == 0x28);
}
#pragma pack(pop)