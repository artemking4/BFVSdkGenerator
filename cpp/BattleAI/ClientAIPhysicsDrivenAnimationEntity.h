// Object: ClientAIPhysicsDrivenAnimationEntity
// ClassId: 6301
// RuntimeId: 21904
// TypeInfo: 0x0000000144BFCE10
#include "../Entity/Entity.h"

namespace BattleAI {
    class ClientAIPhysicsDrivenAnimationEntity : public Entity::Entity {
        char pad_0x20[0xFD0];
    }; // 0xFF0
    static_assert(sizeof(ClientAIPhysicsDrivenAnimationEntity) == 0xFF0);
}