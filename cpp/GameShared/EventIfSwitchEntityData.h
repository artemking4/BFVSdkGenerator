// Object: EventIfSwitchEntityData
// ClassId: 2718
// RuntimeId: 46936
// TypeInfo: 0x0000000144E76BC0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class EventIfSwitchEntityData : public Entity::EntityData {
        Boolean StartState; // 0x20
        Boolean RunOnce; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(EventIfSwitchEntityData) == 0x28);
}
#pragma pack(pop)