// Object: ClientVoiceOverObjectReaderEntity
// ClassId: 7044
// RuntimeId: 11551
// TypeInfo: 0x0000000144F368E0
#include "../Entity/Entity.h"

namespace Soldier {
    class ClientVoiceOverObjectReaderEntity : public Entity::Entity {
        char pad_0x20[0x240];
    }; // 0x260
    static_assert(sizeof(ClientVoiceOverObjectReaderEntity) == 0x260);
}