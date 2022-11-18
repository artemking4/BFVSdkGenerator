// Object: Vec3TrackData
// ClassId: 4050
// RuntimeId: 49740
// TypeInfo: 0x0000000144F60910
#include "../Timeline/PropertyTrackBaseData.h"
#include "../Timeline/FloatTrackData.h"

#pragma pack(push, 8)
namespace Timeline {
    class Vec3TrackData : public Timeline::PropertyTrackBaseData {
        Timeline::FloatTrackData X; // 0x40
        Timeline::FloatTrackData Y; // 0x48
        Timeline::FloatTrackData Z; // 0x50
    }; // 0x58
    static_assert(sizeof(Vec3TrackData) == 0x58);
}
#pragma pack(pop)