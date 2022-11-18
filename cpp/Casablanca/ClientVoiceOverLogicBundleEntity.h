// Object: ClientVoiceOverLogicBundleEntity
// ClassId: 7043
// RuntimeId: 52385
// TypeInfo: 0x0000000144C45220
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientVoiceOverLogicBundleEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientVoiceOverLogicBundleEntity) == 0x38);
}