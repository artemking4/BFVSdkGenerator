// Object: SoundEntityTrackTransformLayerData
// ClassId: 4048
// RuntimeId: 739
// TypeInfo: 0x0000000144E1E4C0
#include "../Timeline/LayeredTransformTrackData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundEntityTrackTransformLayerData : public Timeline::LayeredTransformTrackData {
        Uint32 LayerHash; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(SoundEntityTrackTransformLayerData) == 0x58);
}
#pragma pack(pop)