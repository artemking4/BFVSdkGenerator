// Object: ClientLookAtTriggerEntity
// ClassId: 7863
// RuntimeId: 1439
// TypeInfo: 0x0000000144F34D80
#include "../Entity/SpatialEntity.h"

namespace Soldier {
    class ClientLookAtTriggerEntity : public Entity::SpatialEntity {
        char pad_0x30[0xE0];
    }; // 0x110
    static_assert(sizeof(ClientLookAtTriggerEntity) == 0x110);
}