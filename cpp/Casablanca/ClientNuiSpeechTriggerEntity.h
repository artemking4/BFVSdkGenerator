// Object: ClientNuiSpeechTriggerEntity
// ClassId: 6763
// RuntimeId: 19939
// TypeInfo: 0x0000000144C92930
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientNuiSpeechTriggerEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientNuiSpeechTriggerEntity) == 0x40);
}