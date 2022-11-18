// Object: EventSyncEntityData
// ClassId: 2725
// RuntimeId: 40988
// TypeInfo: 0x0000000144E6DBD0
#include "../Entity/EntityData.h"
#include "../Core/LocalPlayerId.h"

#pragma pack(push, 8)
namespace GameShared {
    class EventSyncEntityData : public Entity::EntityData {
        Core::LocalPlayerId LocalPlayerId; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(EventSyncEntityData) == 0x28);
}
#pragma pack(pop)