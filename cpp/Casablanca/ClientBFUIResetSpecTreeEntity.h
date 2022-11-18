// Object: ClientBFUIResetSpecTreeEntity
// ClassId: 6559
// RuntimeId: 25623
// TypeInfo: 0x0000000144CB0D20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIResetSpecTreeEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIResetSpecTreeEntity) == 0x50);
}