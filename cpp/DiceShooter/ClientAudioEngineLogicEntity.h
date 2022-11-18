// Object: ClientAudioEngineLogicEntity
// ClassId: 6330
// RuntimeId: 17163
// TypeInfo: 0x0000000144DD1060
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientAudioEngineLogicEntity : public Entity::Entity {
        char pad_0x20[0x1B0];
    }; // 0x1D0
    static_assert(sizeof(ClientAudioEngineLogicEntity) == 0x1D0);
}