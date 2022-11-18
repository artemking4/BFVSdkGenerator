// Object: VoiceOverManagerControlEntity
// ClassId: 8266
// RuntimeId: 30440
// TypeInfo: 0x0000000144E380B0
#include "../Entity/Entity.h"

namespace GameClient {
    class VoiceOverManagerControlEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(VoiceOverManagerControlEntity) == 0x30);
}