// Object: SoundEntityTrackLayerData
// ClassId: 4055
// RuntimeId: 32579
// TypeInfo: 0x0000000144E1E440
#include "../Timeline/TimelineTrackData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundEntityTrackLayerData : public Timeline::TimelineTrackData {
        Uint32 LayerHash; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(SoundEntityTrackLayerData) == 0x38);
}
#pragma pack(pop)