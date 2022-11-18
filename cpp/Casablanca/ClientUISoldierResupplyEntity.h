// Object: ClientUISoldierResupplyEntity
// ClassId: 7878
// RuntimeId: 36988
// TypeInfo: 0x0000000144CA0F60
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientUISoldierResupplyEntity : public Entity::SpatialEntity {
        char pad_0x30[0x90];
    }; // 0xC0
    static_assert(sizeof(ClientUISoldierResupplyEntity) == 0xC0);
}