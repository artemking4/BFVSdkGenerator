// Object: ClientAIStateEntity
// ClassId: 6303
// RuntimeId: 19231
// TypeInfo: 0x0000000144BFCD00
#include "../Entity/Entity.h"

namespace BattleAI {
    class ClientAIStateEntity : public Entity::Entity {
        char pad_0x20[0x178];
    }; // 0x198
    static_assert(sizeof(ClientAIStateEntity) == 0x198);
}