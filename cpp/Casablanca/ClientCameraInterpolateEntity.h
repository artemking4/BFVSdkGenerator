// Object: ClientCameraInterpolateEntity
// ClassId: 6625
// RuntimeId: 14507
// TypeInfo: 0x0000000144C90530
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientCameraInterpolateEntity : public Entity::Entity {
        char pad_0x20[0x160];
    }; // 0x180
    static_assert(sizeof(ClientCameraInterpolateEntity) == 0x180);
}