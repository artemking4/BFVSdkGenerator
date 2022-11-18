// Object: ClientInteractableGrenadeEntity
// ClassId: 7915
// RuntimeId: 40622
// TypeInfo: 0x0000000144C5BCB0
#include "../Soldier/ClientGrenadeEntity.h"

namespace Casablanca {
    class ClientInteractableGrenadeEntity : public Soldier::ClientGrenadeEntity {
        char pad_0x5B0[0x10];
    }; // 0x5C0
    static_assert(sizeof(ClientInteractableGrenadeEntity) == 0x5C0);
}