// Object: ClientVoiceOverInfoEntity
// ClassId: 7040
// RuntimeId: 33167
// TypeInfo: 0x0000000144C45440
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientVoiceOverInfoEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientVoiceOverInfoEntity) == 0x38);
}