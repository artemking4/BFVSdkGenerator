// Object: PathLinkEntity
// ClassId: 8005
// RuntimeId: 35732
// TypeInfo: 0x0000000144BF0A60
#include "../Entity/SpatialEntity.h"

namespace BattleAI {
    class PathLinkEntity : public Entity::SpatialEntity {
        char pad_0x30[0x28];
    }; // 0x58
    static_assert(sizeof(PathLinkEntity) == 0x58);
}