// Object: PA2LookAtKeyframe
// ClassId: 5181
// RuntimeId: 28950
// TypeInfo: 0x0000000144E45140
#include "../Timeline/TimelineKeyframeData.h"
#include "../Global/Float32.h"
#include "../GameClient/PA2LookAtTarget.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameClient {
    class PA2LookAtKeyframe : public Timeline::TimelineKeyframeData {
        Float32 Time; // 0x18
        char pad_0x1C[0x4];
        GameClient::PA2LookAtTarget Target; // 0x20
        Int32 Controller; // 0x28
        Boolean SnapToTarget; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(PA2LookAtKeyframe) == 0x30);
}
#pragma pack(pop)