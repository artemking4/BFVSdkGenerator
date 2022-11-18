// Object: ClientSphereQueryEntity
// ClassId: 6872
// RuntimeId: 15087
// TypeInfo: 0x0000000144DCCDE0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientSphereQueryEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ClientSphereQueryEntity) == 0x120);
}