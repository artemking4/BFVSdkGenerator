// Object: Vec2TrackData
// ClassId: 4049
// RuntimeId: 65203
// TypeInfo: 0x0000000144F60990
#include "../Timeline/PropertyTrackBaseData.h"
#include "../Timeline/FloatTrackData.h"

#pragma pack(push, 8)
namespace Timeline {
    class Vec2TrackData : public Timeline::PropertyTrackBaseData {
        Timeline::FloatTrackData X; // 0x40
        Timeline::FloatTrackData Y; // 0x48
    }; // 0x50
    static_assert(sizeof(Vec2TrackData) == 0x50);
}
#pragma pack(pop)