// Object: ClientDroppedWeaponEntity
// ClassId: 7933
// RuntimeId: 55750
// TypeInfo: 0x0000000144CD2330
#include "../Casablanca/ClientDroppedItemEntity.h"

namespace Casablanca {
    class ClientDroppedWeaponEntity : public Casablanca::ClientDroppedItemEntity {
        char pad_0x710[0xA40];
    }; // 0x1150
    static_assert(sizeof(ClientDroppedWeaponEntity) == 0x1150);
}