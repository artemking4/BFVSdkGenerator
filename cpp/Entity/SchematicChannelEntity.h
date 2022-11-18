// Object: SchematicChannelEntity
// ClassId: 7369
// RuntimeId: 30914
// TypeInfo: 0x0000000144EDA140
#include "../Entity/Entity.h"

namespace Entity {
    class SchematicChannelEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(SchematicChannelEntity) == 0xB8);
}