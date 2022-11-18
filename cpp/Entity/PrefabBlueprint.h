// Object: PrefabBlueprint
// ClassId: 272
// RuntimeId: 24712
// TypeInfo: 0x0000000144ED7D70
#include "../Entity/Blueprint.h"
#include "../Entity/GameObjectData.h"
#include "../Entity/TimeDeltaType.h"

#pragma pack(push, 8)
namespace Entity {
    class PrefabBlueprint : public Entity::Blueprint {
        Array<Entity::GameObjectData> Objects; // 0x48
        Entity::TimeDeltaType TimeDeltaType; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(PrefabBlueprint) == 0x58);
}
#pragma pack(pop)