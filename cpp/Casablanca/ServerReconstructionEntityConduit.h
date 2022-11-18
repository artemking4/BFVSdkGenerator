// Object: ServerReconstructionEntityConduit
// ClassId: 7690
// RuntimeId: 5510
// TypeInfo: 0x0000000144C3DCB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerReconstructionEntityConduit : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerReconstructionEntityConduit) == 0x38);
}