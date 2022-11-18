// Object: ClientDroppedKitEntity
// ClassId: 7932
// RuntimeId: 40866
// TypeInfo: 0x0000000144CD2440
#include "../Casablanca/ClientDroppedItemEntity.h"

namespace Casablanca {
    class ClientDroppedKitEntity : public Casablanca::ClientDroppedItemEntity {
        char pad_0x710[0xA40];
    }; // 0x1150
    static_assert(sizeof(ClientDroppedKitEntity) == 0x1150);
}