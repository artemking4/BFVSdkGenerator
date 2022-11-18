// Object: ClientBFUIWeaponInstanceCompareEntity
// ClassId: 6515
// RuntimeId: 60479
// TypeInfo: 0x0000000144CA7DF0
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIWeaponInstanceCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIWeaponInstanceCompareEntity) == 0x68);
}