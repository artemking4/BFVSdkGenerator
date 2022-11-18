// Object: ANTEvaluatorData
// ClassId: 83
// RuntimeId: 26756
// TypeInfo: 0x0000000144E9DFD0
#include "../Core/DataContainer.h"
#include "../GameShared/ANTLayerData.h"
#include "../Ant/AntRef.h"
#include "../GameShared/BoneInfo.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTEvaluatorData : public Core::DataContainer {
        Array<GameShared::ANTLayerData> LayerTracks; // 0x18
        Ant::AntRef Actor; // 0x20
        char pad_0x34[0x4];
        Array<GameShared::BoneInfo> BoneInfos; // 0x38
    }; // 0x40
    static_assert(sizeof(ANTEvaluatorData) == 0x40);
}
#pragma pack(pop)