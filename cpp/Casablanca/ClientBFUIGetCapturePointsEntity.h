// Object: ClientBFUIGetCapturePointsEntity
// ClassId: 6421
// RuntimeId: 26635
// TypeInfo: 0x0000000144C85FE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetCapturePointsEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientBFUIGetCapturePointsEntity) == 0x68);
}