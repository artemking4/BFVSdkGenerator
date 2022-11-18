// Object: ClientUISplineVertexBuilderEntity
// ClassId: 7006
// RuntimeId: 25093
// TypeInfo: 0x0000000144CB4580
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISplineVertexBuilderEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUISplineVertexBuilderEntity) == 0x38);
}