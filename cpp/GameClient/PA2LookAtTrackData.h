// Object: PA2LookAtTrackData
// ClassId: 4020
// RuntimeId: 3482
// TypeInfo: 0x0000000144E450C0
#include "../Timeline/TimelineTrackData.h"
#include "../GameClient/PA2LookAtKeyframe.h"

#pragma pack(push, 8)
namespace GameClient {
    class PA2LookAtTrackData : public Timeline::TimelineTrackData {
        Array<GameClient::PA2LookAtKeyframe> Keyframes; // 0x30
    }; // 0x38
    static_assert(sizeof(PA2LookAtTrackData) == 0x38);
}
#pragma pack(pop)