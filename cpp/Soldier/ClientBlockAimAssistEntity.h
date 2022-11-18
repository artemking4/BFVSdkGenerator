// Object: ClientBlockAimAssistEntity
// ClassId: 7852
// RuntimeId: 24444
// TypeInfo: 0x0000000144F2F4A0
#include "../Entity/SpatialEntity.h"

namespace Soldier {
    class ClientBlockAimAssistEntity : public Entity::SpatialEntity {
        char pad_0x30[0x80];
    }; // 0xB0
    static_assert(sizeof(ClientBlockAimAssistEntity) == 0xB0);
}