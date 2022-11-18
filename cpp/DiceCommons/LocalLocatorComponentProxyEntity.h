// Object: LocalLocatorComponentProxyEntity
// ClassId: 7988
// RuntimeId: 33163
// TypeInfo: 0x0000000144DAE710
#include "../Entity/SpatialEntity.h"

namespace DiceCommons {
    class LocalLocatorComponentProxyEntity : public Entity::SpatialEntity {
        char pad_0x30[0x70];
    }; // 0xA0
    static_assert(sizeof(LocalLocatorComponentProxyEntity) == 0xA0);
}