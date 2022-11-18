// Object: ClientUIVoiceEntity
// ClassId: 7025
// RuntimeId: 60266
// TypeInfo: 0x0000000144CB6F40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIVoiceEntity : public Entity::Entity {
        char pad_0x20[0x33F0];
    }; // 0x3410
    static_assert(sizeof(ClientUIVoiceEntity) == 0x3410);
}