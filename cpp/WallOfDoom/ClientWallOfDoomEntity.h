// Object: ClientWallOfDoomEntity
// ClassId: 7052
// RuntimeId: 54160
// TypeInfo: 0x0000000144F71080
#include "../Entity/Entity.h"

namespace WallOfDoom {
    class ClientWallOfDoomEntity : public Entity::Entity {
        char pad_0x20[0x3D0];
    }; // 0x3F0
    static_assert(sizeof(ClientWallOfDoomEntity) == 0x3F0);
}