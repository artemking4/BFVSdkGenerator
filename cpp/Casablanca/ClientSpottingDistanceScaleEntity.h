// Object: ClientSpottingDistanceScaleEntity
// ClassId: 6873
// RuntimeId: 35787
// TypeInfo: 0x0000000144C54660
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSpottingDistanceScaleEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientSpottingDistanceScaleEntity) == 0x60);
}