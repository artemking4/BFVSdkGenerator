// Object: ClientAIGlobalStateEntity
// ClassId: 6300
// RuntimeId: 725
// TypeInfo: 0x0000000144BFCF20
#include "../Entity/Entity.h"

namespace BattleAI {
    class ClientAIGlobalStateEntity : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ClientAIGlobalStateEntity) == 0xF0);
}