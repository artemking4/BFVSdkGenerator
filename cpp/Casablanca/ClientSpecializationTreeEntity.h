// Object: ClientSpecializationTreeEntity
// ClassId: 6869
// RuntimeId: 52776
// TypeInfo: 0x0000000144CB0C10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSpecializationTreeEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientSpecializationTreeEntity) == 0x80);
}