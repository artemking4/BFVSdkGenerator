// Object: ClientMusicEventPriorityEntity
// ClassId: 6757
// RuntimeId: 10375
// TypeInfo: 0x0000000144DAC330
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientMusicEventPriorityEntity : public Entity::Entity {
        char pad_0x20[0x148];
    }; // 0x168
    static_assert(sizeof(ClientMusicEventPriorityEntity) == 0x168);
}