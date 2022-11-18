// Object: ClientBFUIGetCapturePointEntity
// ClassId: 6419
// RuntimeId: 25750
// TypeInfo: 0x0000000144C860F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetCapturePointEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIGetCapturePointEntity) == 0x40);
}