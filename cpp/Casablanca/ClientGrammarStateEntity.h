// Object: ClientGrammarStateEntity
// ClassId: 6722
// RuntimeId: 38945
// TypeInfo: 0x0000000144C92B50
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientGrammarStateEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientGrammarStateEntity) == 0x38);
}