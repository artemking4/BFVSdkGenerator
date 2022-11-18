// Object: SoundAreaEntity
// ClassId: 7816
// RuntimeId: 38989
// TypeInfo: 0x0000000144E383E0
#include "../Entity/Entity.h"

namespace GameClient {
    class SoundAreaEntity : public Entity::Entity {
        char pad_0x20[0x1F0];
    }; // 0x210
    static_assert(sizeof(SoundAreaEntity) == 0x210);
}