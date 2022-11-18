// Object: ClientLocalBargeTriggerEntity
// ClassId: 7860
// RuntimeId: 38085
// TypeInfo: 0x0000000144CD1340
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientLocalBargeTriggerEntity : public Entity::SpatialEntity {
        char pad_0x30[0xD0];
    }; // 0x100
    static_assert(sizeof(ClientLocalBargeTriggerEntity) == 0x100);
}