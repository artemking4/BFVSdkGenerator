// Object: BooleanPinConditionData
// ClassId: 5188
// RuntimeId: 56814
// TypeInfo: 0x0000000144F60C10
#include "../Timeline/TimelineTrackDataConditionsBase.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Timeline {
    class BooleanPinConditionData : public Timeline::TimelineTrackDataConditionsBase {
        Int32 ConditionPinId; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(BooleanPinConditionData) == 0x20);
}
#pragma pack(pop)