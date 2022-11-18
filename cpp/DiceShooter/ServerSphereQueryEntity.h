// Object: ServerSphereQueryEntity
// ClassId: 7722
// RuntimeId: 12903
// TypeInfo: 0x0000000144DD24C0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerSphereQueryEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ServerSphereQueryEntity) == 0x120);
}