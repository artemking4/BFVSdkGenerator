// Object: ClientBFUIWeaponCompareEntity
// ClassId: 6514
// RuntimeId: 20201
// TypeInfo: 0x0000000144CA7F00
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIWeaponCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIWeaponCompareEntity) == 0x68);
}