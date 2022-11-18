// Object: VariationSelectionObserverNodeData
// ClassId: 1114
// RuntimeId: 44112
// TypeInfo: 0x0000000144E023F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/NewWaveAsset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class VariationSelectionObserverNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Selection; // 0x18
        Audio::AudioGraphNodePort Select; // 0x20
        Audio::AudioGraphNodePort NumVariationsInSelection; // 0x28
        Audio::AudioGraphNodePort NumVariationsValidated; // 0x30
        Audio::AudioGraphNodePort NumVariationsLoaded; // 0x38
        Audio::NewWaveAsset NewWaveAsset; // 0x40
        Array<Uint32> VariationIds; // 0x48
    }; // 0x50
    static_assert(sizeof(VariationSelectionObserverNodeData) == 0x50);
}
#pragma pack(pop)