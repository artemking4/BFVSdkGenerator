// Object: ServerArrayDamageAreaOverTimeEntity
// ClassId: 8017
// RuntimeId: 13846
// TypeInfo: 0x0000000144C3BFC0
#include "../Casablanca/ServerDamageAreaOverTimeBase.h"

namespace Casablanca {
    class ServerArrayDamageAreaOverTimeEntity : public Casablanca::ServerDamageAreaOverTimeBase {
        char pad_0x180[0xD0];
    }; // 0x250
    static_assert(sizeof(ServerArrayDamageAreaOverTimeEntity) == 0x250);
}