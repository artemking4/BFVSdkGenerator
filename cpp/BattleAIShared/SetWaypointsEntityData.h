// Object: SetWaypointsEntityData
// ClassId: 3200
// RuntimeId: 63770
// TypeInfo: 0x0000000144C195B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SetWaypointsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 Speed; // 0x24
        Boolean Looping; // 0x28
        Boolean StartAtGeometricallyClosestWaypoint; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(SetWaypointsEntityData) == 0x30);
}
#pragma pack(pop)