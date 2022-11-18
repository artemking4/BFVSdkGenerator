// Object: ServerDroppedKitEntity
// ClassId: 7941
// RuntimeId: 10437
// TypeInfo: 0x0000000144C3B960
#include "../Casablanca/ServerDroppedItemEntity.h"

namespace Casablanca {
    class ServerDroppedKitEntity : public Casablanca::ServerDroppedItemEntity {
        char pad_0x260[0xA40];
    }; // 0xCA0
    static_assert(sizeof(ServerDroppedKitEntity) == 0xCA0);
}