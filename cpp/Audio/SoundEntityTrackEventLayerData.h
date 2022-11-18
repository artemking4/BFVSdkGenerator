// Object: SoundEntityTrackEventLayerData
// ClassId: 4057
// RuntimeId: 22024
// TypeInfo: 0x0000000144E1E3C0
#include "../Audio/SoundEntityTrackLayerData.h"
#include "../Audio/SoundEntityTrackEventKeyframeData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundEntityTrackEventLayerData : public Audio::SoundEntityTrackLayerData {
        Array<Audio::SoundEntityTrackEventKeyframeData> Keyframes; // 0x38
        Boolean FireEventsUponSkip; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(SoundEntityTrackEventLayerData) == 0x48);
}
#pragma pack(pop)