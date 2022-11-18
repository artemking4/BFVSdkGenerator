// Object: ColorTrackData
// ClassId: 4040
// RuntimeId: 53506
// TypeInfo: 0x0000000144F63F90
#include "../Timeline/PropertyTrackBaseData.h"
#include "../Timeline/ColorKeyframe.h"

#pragma pack(push, 8)
namespace Timeline {
    class ColorTrackData : public Timeline::PropertyTrackBaseData {
        Array<Timeline::ColorKeyframe> Keyframes; // 0x40
    }; // 0x48
    static_assert(sizeof(ColorTrackData) == 0x48);
}
#pragma pack(pop)