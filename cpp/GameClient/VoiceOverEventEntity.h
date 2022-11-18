// Object: VoiceOverEventEntity
// ClassId: 8265
// RuntimeId: 29277
// TypeInfo: 0x0000000144E381C0
#include "../Entity/Entity.h"

namespace GameClient {
    class VoiceOverEventEntity : public Entity::Entity {
        char pad_0x20[0xC8];
    }; // 0xE8
    static_assert(sizeof(VoiceOverEventEntity) == 0xE8);
}