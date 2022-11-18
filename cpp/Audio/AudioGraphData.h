// Object: AudioGraphData
// ClassId: 920
// RuntimeId: 14938
// TypeInfo: 0x0000000144E179C0
#include "../Core/DataContainer.h"
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphParameter.h"
#include "../Audio/AudioGraphEvent.h"
#include "../Audio/AudioGraphAssetParameter.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace Audio {
    class AudioGraphData : public Core::DataContainer {
        Array<Audio::AudioGraphNodeData> Nodes; // 0x18
        Array<Audio::AudioGraphParameter> PublicParameters; // 0x20
        Array<Audio::AudioGraphEvent> PublicEvents; // 0x28
        Array<Audio::AudioGraphAssetParameter> PublicAssetParameters; // 0x30
        Uint16 PublicValueCount; // 0x38
        Uint16 ValueCount; // 0x3A
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(AudioGraphData) == 0x40);
}
#pragma pack(pop)