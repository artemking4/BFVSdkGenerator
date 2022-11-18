// Object: ServerAffectorStreamEntity
// ClassId: 7432
// RuntimeId: 61158
// TypeInfo: 0x0000000144DCE6D0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerAffectorStreamEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ServerAffectorStreamEntity) == 0x78);
}