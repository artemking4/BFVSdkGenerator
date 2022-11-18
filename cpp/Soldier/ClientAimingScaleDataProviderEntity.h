// Object: ClientAimingScaleDataProviderEntity
// ClassId: 6316
// RuntimeId: 45385
// TypeInfo: 0x0000000144F31590
#include "../Entity/Entity.h"

namespace Soldier {
    class ClientAimingScaleDataProviderEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientAimingScaleDataProviderEntity) == 0x48);
}