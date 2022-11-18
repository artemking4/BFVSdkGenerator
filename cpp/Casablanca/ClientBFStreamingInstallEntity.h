// Object: ClientBFStreamingInstallEntity
// ClassId: 6360
// RuntimeId: 39054
// TypeInfo: 0x0000000144C90860
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFStreamingInstallEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientBFStreamingInstallEntity) == 0x38);
}