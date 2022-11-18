// Object: ClientSimpleRotationEntity
// ClassId: 6856
// RuntimeId: 27542
// TypeInfo: 0x0000000144DAEE80
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientSimpleRotationEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientSimpleRotationEntity) == 0xA8);
}