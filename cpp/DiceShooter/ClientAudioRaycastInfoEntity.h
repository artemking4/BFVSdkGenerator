// Object: ClientAudioRaycastInfoEntity
// ClassId: 6331
// RuntimeId: 8970
// TypeInfo: 0x0000000144DD0F50
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientAudioRaycastInfoEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientAudioRaycastInfoEntity) == 0x68);
}