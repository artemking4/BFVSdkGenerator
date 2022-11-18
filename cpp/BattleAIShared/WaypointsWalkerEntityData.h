// Object: WaypointsWalkerEntityData
// ClassId: 3911
// RuntimeId: 33978
// TypeInfo: 0x0000000144C11700
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class WaypointsWalkerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 Speed; // 0x24
        Boolean Circular; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(WaypointsWalkerEntityData) == 0x30);
}
#pragma pack(pop)