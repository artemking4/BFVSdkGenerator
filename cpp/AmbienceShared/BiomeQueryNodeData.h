// Object: BiomeQueryNodeData
// ClassId: 963
// RuntimeId: 48081
// TypeInfo: 0x0000000144BDFD60
#include "../Audio/AudioGraphNodeData.h"
#include "../AmbienceShared/AmbientDataAsset.h"
#include "../Global/Uint32.h"
#include "../AmbienceShared/AmbienceQueryMethod.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class BiomeQueryNodeData : public Audio::AudioGraphNodeData {
        AmbienceShared::AmbientDataAsset Asset; // 0x18
        Uint32 BiomeNameHash; // 0x20
        AmbienceShared::AmbienceQueryMethod QueryMethod; // 0x24
        Audio::AudioGraphNodePort Value; // 0x28
        Audio::AudioGraphNodePort LocalPlayerId; // 0x30
    }; // 0x38
    static_assert(sizeof(BiomeQueryNodeData) == 0x38);
}
#pragma pack(pop)