// Object: ClientBFUIGetSpectatorCameraListEntity
// ClassId: 6452
// RuntimeId: 30110
// TypeInfo: 0x0000000144CCC400
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetSpectatorCameraListEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFUIGetSpectatorCameraListEntity) == 0x48);
}