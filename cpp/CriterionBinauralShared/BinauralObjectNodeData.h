// Object: BinauralObjectNodeData
// ClassId: 1057
// RuntimeId: 13987
// TypeInfo: 0x0000000144DA3E40
#include "../Audio/ObjectNodeData.h"
#include "../Audio/SoundBusData.h"
#include "../CriterionBinauralShared/PanningMethod.h"
#include "../CriterionBinauralShared/StereoHandling.h"
#include "../CriterionBinauralShared/LcrHandling.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace CriterionBinauralShared {
    class BinauralObjectNodeData : public Audio::ObjectNodeData {
        Audio::SoundBusData BinauralMaster; // 0x28
        CriterionBinauralShared::PanningMethod PanningMethod; // 0x30
        CriterionBinauralShared::StereoHandling StereoHandling; // 0x34
        CriterionBinauralShared::LcrHandling LcrHandling; // 0x38
        Audio::SoundGraphPluginRef MainSendPlugin; // 0x3C
        char pad_0x3F[0x1];
    }; // 0x40
    static_assert(sizeof(BinauralObjectNodeData) == 0x40);
}
#pragma pack(pop)