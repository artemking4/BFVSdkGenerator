// Object: ServerDroppedWeaponEntity
// ClassId: 7942
// RuntimeId: 34617
// TypeInfo: 0x0000000144C3F1F0
#include "../Casablanca/ServerDroppedItemEntity.h"

namespace Casablanca {
    class ServerDroppedWeaponEntity : public Casablanca::ServerDroppedItemEntity {
        char pad_0x260[0xA80];
    }; // 0xCE0
    static_assert(sizeof(ServerDroppedWeaponEntity) == 0xCE0);
}