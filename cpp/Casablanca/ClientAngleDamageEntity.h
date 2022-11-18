// Object: ClientAngleDamageEntity
// ClassId: 6184
// RuntimeId: 18526
// TypeInfo: 0x0000000144C49380
#include "../Casablanca/AngleDamageEntity.h"

namespace Casablanca {
    class ClientAngleDamageEntity : public Casablanca::AngleDamageEntity {
        char pad_0x190[0x10];
    }; // 0x1A0
    static_assert(sizeof(ClientAngleDamageEntity) == 0x1A0);
}