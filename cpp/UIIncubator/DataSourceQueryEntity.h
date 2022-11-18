// Object: DataSourceQueryEntity
// ClassId: 7106
// RuntimeId: 12740
// TypeInfo: 0x0000000144F6AEF0
#include "../Entity/Entity.h"

namespace UIIncubator {
    class DataSourceQueryEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(DataSourceQueryEntity) == 0x98);
}