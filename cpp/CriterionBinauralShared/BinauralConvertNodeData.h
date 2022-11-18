// Object: BinauralConvertNodeData
// ClassId: 961
// RuntimeId: 8672
// TypeInfo: 0x0000000144DA3FC0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../CriterionBinauralShared/HeadRelatedImpulseResponseSetAsset.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace CriterionBinauralShared {
    class BinauralConvertNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::AudioGraphNodePort UseBinauralProcessing; // 0x28
        CriterionBinauralShared::HeadRelatedImpulseResponseSetAsset HrirSet; // 0x30
        Audio::SoundGraphPluginRef BinauralMasterPlugin; // 0x38
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(BinauralConvertNodeData) == 0x40);
}
#pragma pack(pop)