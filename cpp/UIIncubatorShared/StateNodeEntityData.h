// Object: StateNodeEntityData
// ClassId: 3524
// RuntimeId: 9625
// TypeInfo: 0x0000000144F6DC40
#include "../UIIncubatorShared/StateNodeEntityBaseData.h"
#include "../UIIncubatorShared/StateNavEventInfo.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class StateNodeEntityData : public UIIncubatorShared::StateNodeEntityBaseData {
        Array<UIIncubatorShared::StateNavEventInfo> EventTriggersInfo; // 0x30
        Array<UIIncubatorShared::StateNavEventInfo> ConsumedEventsInfo; // 0x38
    }; // 0x40
    static_assert(sizeof(StateNodeEntityData) == 0x40);
}
#pragma pack(pop)