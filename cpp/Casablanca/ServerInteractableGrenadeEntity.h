// Object: ServerInteractableGrenadeEntity
// ClassId: 7966
// RuntimeId: 65464
// TypeInfo: 0x0000000144C64970
#include "../Soldier/ServerGrenadeEntity.h"

namespace Casablanca {
    class ServerInteractableGrenadeEntity : public Soldier::ServerGrenadeEntity {
        char pad_0x640[0x10];
    }; // 0x650
    static_assert(sizeof(ServerInteractableGrenadeEntity) == 0x650);
}