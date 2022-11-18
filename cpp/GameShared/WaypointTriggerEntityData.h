// Object: WaypointTriggerEntityData
// ClassId: 3910
// RuntimeId: 20211
// TypeInfo: 0x0000000144E776C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace GameShared {
    class WaypointTriggerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WaypointTriggerEntityData) == 0x28);
}
#pragma pack(pop)