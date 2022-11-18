// Object: MovieTrackData
// ClassId: 4018
// RuntimeId: 1567
// TypeInfo: 0x0000000144E960B0
#include "../Timeline/GuideTrackData.h"
#include "../GameShared/MovieTrackKeyframe.h"

#pragma pack(push, 8)
namespace GameShared {
    class MovieTrackData : public Timeline::GuideTrackData {
        Array<GameShared::MovieTrackKeyframe> Keyframes; // 0x38
    }; // 0x40
    static_assert(sizeof(MovieTrackData) == 0x40);
}
#pragma pack(pop)