// Object: ObjectBlueprint
// ClassId: 253
// RuntimeId: 22032
// TypeInfo: 0x0000000144ED7DF0
#include "../Entity/Blueprint.h"
#include "../Entity/EntityData.h"

#pragma pack(push, 8)
namespace Entity {
    class ObjectBlueprint : public Entity::Blueprint {
        Entity::EntityData Object; // 0x48
    }; // 0x50
    static_assert(sizeof(ObjectBlueprint) == 0x50);
}
#pragma pack(pop)