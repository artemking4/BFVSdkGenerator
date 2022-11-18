// Object: DynamicWaypointsEntityData
// ClassId: 2679
// RuntimeId: 48888
// TypeInfo: 0x0000000144C313F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DynamicWaypointsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 WaypointCount; // 0x24
    }; // 0x28
    static_assert(sizeof(DynamicWaypointsEntityData) == 0x28);
}
#pragma pack(pop)