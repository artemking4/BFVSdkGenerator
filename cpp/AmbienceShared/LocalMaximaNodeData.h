// Object: LocalMaximaNodeData
// ClassId: 1028
// RuntimeId: 43154
// TypeInfo: 0x0000000144BDFDE0
#include "../Audio/AudioGraphNodeData.h"
#include "../AmbienceShared/AmbientDataAsset.h"
#include "../AmbienceShared/LocalMaximaData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class LocalMaximaNodeData : public Audio::AudioGraphNodeData {
        AmbienceShared::AmbientDataAsset Asset; // 0x18
        AmbienceShared::LocalMaximaData LocalMaximaSet; // 0x20
        Audio::AudioGraphNodePort DistanceToClosestLocalMaximum; // 0x28
        Audio::AudioGraphNodePort HeightDifferenceToClosestLocalMaximum; // 0x30
    }; // 0x38
    static_assert(sizeof(LocalMaximaNodeData) == 0x38);
}
#pragma pack(pop)