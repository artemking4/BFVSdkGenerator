// Object: DelayTriggerEntityData
// ClassId: 3468
// RuntimeId: 4566
// TypeInfo: 0x0000000144E8ECE0
#include "../GameShared/TriggerEventEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class DelayTriggerEntityData : public GameShared::TriggerEventEntityData {
        Boolean AutoTriggerEvent; // 0x70
        char pad_0x71[0xF];
    }; // 0x80
    static_assert(sizeof(DelayTriggerEntityData) == 0x80);
}
#pragma pack(pop)