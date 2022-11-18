// Object: ClientCharacterStateChannelReaderEntity
// ClassId: 6629
// RuntimeId: 65369
// TypeInfo: 0x0000000144DCE3A0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientCharacterStateChannelReaderEntity : public Entity::Entity {
        char pad_0x20[0x420];
    }; // 0x440
    static_assert(sizeof(ClientCharacterStateChannelReaderEntity) == 0x440);
}