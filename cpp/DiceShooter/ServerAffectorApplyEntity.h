// Object: ServerAffectorApplyEntity
// ClassId: 7429
// RuntimeId: 58966
// TypeInfo: 0x0000000144DD6930
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerAffectorApplyEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ServerAffectorApplyEntity) == 0xC0);
}