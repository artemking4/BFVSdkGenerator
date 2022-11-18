// Object: ClientDakarInteractionEntity
// ClassId: 8001
// RuntimeId: 25151
// TypeInfo: 0x0000000144C88E70
#include "../Casablanca/DakarInteractionEntity.h"

namespace Casablanca {
    class ClientDakarInteractionEntity : public Casablanca::DakarInteractionEntity {
        char pad_0xD0[0x10];
    }; // 0xE0
    static_assert(sizeof(ClientDakarInteractionEntity) == 0xE0);
}