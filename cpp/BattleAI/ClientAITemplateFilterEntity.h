// Object: ClientAITemplateFilterEntity
// ClassId: 6304
// RuntimeId: 40553
// TypeInfo: 0x0000000144BFCBF0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ClientAITemplateFilterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientAITemplateFilterEntity) == 0x30);
}