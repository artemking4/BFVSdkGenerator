// Object: ClientPrivateGamesMutatorTranslatorEntity
// ClassId: 6820
// RuntimeId: 8068
// TypeInfo: 0x0000000144C94D80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPrivateGamesMutatorTranslatorEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientPrivateGamesMutatorTranslatorEntity) == 0x80);
}