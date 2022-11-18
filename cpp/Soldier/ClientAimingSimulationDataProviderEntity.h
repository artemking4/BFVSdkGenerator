// Object: ClientAimingSimulationDataProviderEntity
// ClassId: 6317
// RuntimeId: 41930
// TypeInfo: 0x0000000144F2F5B0
#include "../Entity/Entity.h"

namespace Soldier {
    class ClientAimingSimulationDataProviderEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientAimingSimulationDataProviderEntity) == 0x40);
}