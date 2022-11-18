// Object: ServerRemainingCaptureTimeEntity
// ClassId: 7691
// RuntimeId: 48827
// TypeInfo: 0x0000000144C603F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerRemainingCaptureTimeEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ServerRemainingCaptureTimeEntity) == 0x60);
}