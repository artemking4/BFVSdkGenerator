// Object: ServerDakarInteractionEntity
// ClassId: 8003
// RuntimeId: 35614
// TypeInfo: 0x0000000144C3A6C0
#include "../Casablanca/DakarInteractionEntity.h"

namespace Casablanca {
    class ServerDakarInteractionEntity : public Casablanca::DakarInteractionEntity {
        char pad_0xD0[0x20];
    }; // 0xF0
    static_assert(sizeof(ServerDakarInteractionEntity) == 0xF0);
}