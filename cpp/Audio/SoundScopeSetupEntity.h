// Object: SoundScopeSetupEntity
// ClassId: 7825
// RuntimeId: 620
// TypeInfo: 0x0000000144E1F710
#include "../Entity/Entity.h"

namespace Audio {
    class SoundScopeSetupEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(SoundScopeSetupEntity) == 0x30);
}