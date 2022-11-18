// Object: ServerArrayDamagePlayerOverTimeEntity
// ClassId: 7500
// RuntimeId: 35879
// TypeInfo: 0x0000000144CE7740
#include "../Casablanca/ServerDamagePlayerOverTimeBaseEntity.h"

namespace Casablanca {
    class ServerArrayDamagePlayerOverTimeEntity : public Casablanca::ServerDamagePlayerOverTimeBaseEntity {
        char pad_0x48[0xC8];
    }; // 0x110
    static_assert(sizeof(ServerArrayDamagePlayerOverTimeEntity) == 0x110);
}