// Object: ServerAITemplateFilterEntity
// ClassId: 7424
// RuntimeId: 30878
// TypeInfo: 0x0000000144BF4590
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAITemplateFilterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerAITemplateFilterEntity) == 0x30);
}