// Object: Vec4TrackData
// ClassId: 4052
// RuntimeId: 51356
// TypeInfo: 0x0000000144F60890
#include "../Timeline/PropertyTrackBaseData.h"
#include "../Timeline/FloatTrackData.h"

#pragma pack(push, 8)
namespace Timeline {
    class Vec4TrackData : public Timeline::PropertyTrackBaseData {
        Timeline::FloatTrackData X; // 0x40
        Timeline::FloatTrackData Y; // 0x48
        Timeline::FloatTrackData Z; // 0x50
        Timeline::FloatTrackData W; // 0x58
    }; // 0x60
    static_assert(sizeof(Vec4TrackData) == 0x60);
}
#pragma pack(pop)