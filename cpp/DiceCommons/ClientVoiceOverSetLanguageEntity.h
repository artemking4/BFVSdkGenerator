// Object: ClientVoiceOverSetLanguageEntity
// ClassId: 7047
// RuntimeId: 56627
// TypeInfo: 0x0000000144DABAB0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientVoiceOverSetLanguageEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientVoiceOverSetLanguageEntity) == 0x70);
}