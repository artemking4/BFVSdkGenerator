// Object: LocalMaximaQueryEntity
// ClassId: 7228
// RuntimeId: 64735
// TypeInfo: 0x0000000144BDD840
#include "../Entity/Entity.h"

namespace Ambience {
    class LocalMaximaQueryEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(LocalMaximaQueryEntity) == 0x68);
}