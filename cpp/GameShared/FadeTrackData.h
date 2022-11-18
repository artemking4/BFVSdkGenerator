// Object: FadeTrackData
// ClassId: 4015
// RuntimeId: 7744
// TypeInfo: 0x0000000144E969B0
#include "../Timeline/TimelineTrackData.h"
#include "../GameShared/FadeTrackKeyframe.h"
#include "../Global/Boolean.h"
#include "../Core/LocalPlayerId.h"

#pragma pack(push, 8)
namespace GameShared {
    class FadeTrackData : public Timeline::TimelineTrackData {
        Array<GameShared::FadeTrackKeyframe> Keyframes; // 0x30
        Core::LocalPlayerId LocalPlayerId; // 0x38
        Boolean FadeScreen; // 0x3C
        Boolean FadeUI; // 0x3D
        Boolean FadeAudio; // 0x3E
        Boolean FadeMovie; // 0x3F
        Boolean FadeRumble; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(FadeTrackData) == 0x48);
}
#pragma pack(pop)