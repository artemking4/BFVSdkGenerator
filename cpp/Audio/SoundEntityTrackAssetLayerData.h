// Object: SoundEntityTrackAssetLayerData
// ClassId: 4056
// RuntimeId: 28071
// TypeInfo: 0x0000000144E1E2C0
#include "../Audio/SoundEntityTrackLayerData.h"
#include "../Audio/SoundEntityTrackAssetKeyframeData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundEntityTrackAssetLayerData : public Audio::SoundEntityTrackLayerData {
        Array<Audio::SoundEntityTrackAssetKeyframeData> Keyframes; // 0x38
        Boolean FireEventsUponSkip; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(SoundEntityTrackAssetLayerData) == 0x48);
}
#pragma pack(pop)