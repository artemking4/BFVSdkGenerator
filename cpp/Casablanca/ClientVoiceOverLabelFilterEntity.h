// Object: ClientVoiceOverLabelFilterEntity
// ClassId: 7042
// RuntimeId: 55240
// TypeInfo: 0x0000000144C45330
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientVoiceOverLabelFilterEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientVoiceOverLabelFilterEntity) == 0x38);
}