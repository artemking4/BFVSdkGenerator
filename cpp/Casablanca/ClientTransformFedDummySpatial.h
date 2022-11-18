// Object: ClientTransformFedDummySpatial
// ClassId: 7876
// RuntimeId: 48768
// TypeInfo: 0x0000000144C92F90
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientTransformFedDummySpatial : public Entity::SpatialEntity {
        char pad_0x30[0x50];
    }; // 0x80
    static_assert(sizeof(ClientTransformFedDummySpatial) == 0x80);
}