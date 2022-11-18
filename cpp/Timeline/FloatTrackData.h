// Object: FloatTrackData
// ClassId: 4042
// RuntimeId: 11645
// TypeInfo: 0x0000000144F645A0
#include "../Timeline/PropertyTrackBaseData.h"
#include "../Timeline/CurveData.h"

#pragma pack(push, 8)
namespace Timeline {
    class FloatTrackData : public Timeline::PropertyTrackBaseData {
        Timeline::CurveData CurveData; // 0x40
    }; // 0x48
    static_assert(sizeof(FloatTrackData) == 0x48);
}
#pragma pack(pop)