// Object: ClientInterpolateTransformEntity
// ClassId: 6732
// RuntimeId: 37534
// TypeInfo: 0x0000000144CD1670
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientInterpolateTransformEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientInterpolateTransformEntity) == 0x48);
}