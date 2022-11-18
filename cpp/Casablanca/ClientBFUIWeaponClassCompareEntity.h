// Object: ClientBFUIWeaponClassCompareEntity
// ClassId: 6513
// RuntimeId: 32119
// TypeInfo: 0x0000000144CA8010
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIWeaponClassCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIWeaponClassCompareEntity) == 0x68);
}