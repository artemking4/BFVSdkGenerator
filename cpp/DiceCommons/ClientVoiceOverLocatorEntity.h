// Object: ClientVoiceOverLocatorEntity
// ClassId: 7882
// RuntimeId: 21115
// TypeInfo: 0x0000000144DABBC0
#include "../Entity/SpatialEntity.h"

namespace DiceCommons {
    class ClientVoiceOverLocatorEntity : public Entity::SpatialEntity {
        char pad_0x30[0x60];
    }; // 0x90
    static_assert(sizeof(ClientVoiceOverLocatorEntity) == 0x90);
}