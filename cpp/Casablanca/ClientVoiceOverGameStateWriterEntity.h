// Object: ClientVoiceOverGameStateWriterEntity
// ClassId: 7039
// RuntimeId: 7515
// TypeInfo: 0x0000000144C44D10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientVoiceOverGameStateWriterEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientVoiceOverGameStateWriterEntity) == 0x78);
}