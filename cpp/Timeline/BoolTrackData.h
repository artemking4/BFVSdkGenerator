// Object: BoolTrackData
// ClassId: 4038
// RuntimeId: 21973
// TypeInfo: 0x0000000144F64010
#include "../Timeline/PropertyTrackBaseData.h"
#include "../Timeline/BoolKeyframe.h"

#pragma pack(push, 8)
namespace Timeline {
    class BoolTrackData : public Timeline::PropertyTrackBaseData {
        Array<Timeline::BoolKeyframe> Keyframes; // 0x40
    }; // 0x48
    static_assert(sizeof(BoolTrackData) == 0x48);
}
#pragma pack(pop)