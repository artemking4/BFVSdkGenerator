// Object: ClientNuiSpeechSetupEntity
// ClassId: 6762
// RuntimeId: 31611
// TypeInfo: 0x0000000144C92A40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientNuiSpeechSetupEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientNuiSpeechSetupEntity) == 0x30);
}