// Object: BinauralMasterNodeData
// ClassId: 1100
// RuntimeId: 10522
// TypeInfo: 0x0000000144DA3EC0
#include "../Audio/BusNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../CriterionBinauralShared/HeadRelatedImpulseResponseSetAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CriterionBinauralShared {
    class BinauralMasterNodeData : public Audio::BusNodeData {
        Audio::AudioGraphNodePort UseBinauralProcessing; // 0x38
        CriterionBinauralShared::HeadRelatedImpulseResponseSetAsset HrirSet; // 0x40
        Audio::SoundGraphPluginRef BinauralMasterPlugin; // 0x48
        Boolean BinauralProcessChannelBasedAudio; // 0x4B
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(BinauralMasterNodeData) == 0x50);
}
#pragma pack(pop)