// Object: EntityData
// ClassId: 1973
// RuntimeId: 36850
// TypeInfo: 0x0000000144ED7670
#include "../Entity/GameObjectData.h"

#pragma pack(push, 8)
namespace Entity {
    class EntityData : public Entity::GameObjectData {
    }; // 0x20
    static_assert(sizeof(EntityData) == 0x20);
}
#pragma pack(pop)