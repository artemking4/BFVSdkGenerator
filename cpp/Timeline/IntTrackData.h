// Object: IntTrackData
// ClassId: 4044
// RuntimeId: 51677
// TypeInfo: 0x0000000144F63E90
#include "../Timeline/PropertyTrackBaseData.h"
#include "../Timeline/IntKeyframe.h"

#pragma pack(push, 8)
namespace Timeline {
    class IntTrackData : public Timeline::PropertyTrackBaseData {
        Array<Timeline::IntKeyframe> Keyframes; // 0x40
    }; // 0x48
    static_assert(sizeof(IntTrackData) == 0x48);
}
#pragma pack(pop)