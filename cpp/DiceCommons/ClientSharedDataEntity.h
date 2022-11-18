// Object: ClientSharedDataEntity
// ClassId: 6854
// RuntimeId: 10439
// TypeInfo: 0x0000000144DAEF90
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientSharedDataEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientSharedDataEntity) == 0x80);
}