// Object: PointCloudBigWorldEntity
// ClassId: 7320
// RuntimeId: 37648
// TypeInfo: 0x0000000144BDD730
#include "../Entity/Entity.h"

namespace Ambience {
    class PointCloudBigWorldEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(PointCloudBigWorldEntity) == 0x68);
}