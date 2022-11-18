// Object: ServerSpawnControllerEntity
// ClassId: 7718
// RuntimeId: 38957
// TypeInfo: 0x0000000144DD4DB0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerSpawnControllerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerSpawnControllerEntity) == 0x30);
}