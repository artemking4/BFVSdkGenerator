// Object: AntEventEntityData
// ClassId: 2059
// RuntimeId: 178
// TypeInfo: 0x0000000144E84BC0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/AntEventData.h"

#pragma pack(push, 8)
namespace GameShared {
    class AntEventEntityData : public Entity::EntityData {
        Array<GameShared::AntEventData> OnEnterEvents; // 0x20
        Array<GameShared::AntEventData> OnUpdateEvents; // 0x28
        Array<GameShared::AntEventData> OnLeaveEvents; // 0x30
        Boolean RequireLink; // 0x38
        Boolean SendAsPlayerEvent; // 0x39
        Boolean AutoActivate; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(AntEventEntityData) == 0x40);
}
#pragma pack(pop)