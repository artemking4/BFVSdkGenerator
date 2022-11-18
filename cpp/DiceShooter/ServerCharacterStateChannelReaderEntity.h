// Object: ServerCharacterStateChannelReaderEntity
// ClassId: 7460
// RuntimeId: 53004
// TypeInfo: 0x0000000144DCE180
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerCharacterStateChannelReaderEntity : public Entity::Entity {
        char pad_0x20[0x420];
    }; // 0x440
    static_assert(sizeof(ServerCharacterStateChannelReaderEntity) == 0x440);
}