// Object: ServerAngleDamageEntity
// ClassId: 6185
// RuntimeId: 9723
// TypeInfo: 0x0000000144C62570
#include "../Casablanca/AngleDamageEntity.h"

namespace Casablanca {
    class ServerAngleDamageEntity : public Casablanca::AngleDamageEntity {
        char pad_0x190[0x90];
    }; // 0x220
    static_assert(sizeof(ServerAngleDamageEntity) == 0x220);
}