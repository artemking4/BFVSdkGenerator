// Object: ClientBFUIProfileOptionAudioLanguageEntity
// ClassId: 6535
// RuntimeId: 64555
// TypeInfo: 0x0000000144CB7E50
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIProfileOptionAudioLanguageEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIProfileOptionAudioLanguageEntity) == 0x40);
}