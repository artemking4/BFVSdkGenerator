// Object: ClientDakarInteractionManagerEntity
// ClassId: 7101
// RuntimeId: 44060
// TypeInfo: 0x0000000144C88D60
#include "../Casablanca/DakarInteractionManagerEntity.h"

namespace Casablanca {
    class ClientDakarInteractionManagerEntity : public Casablanca::DakarInteractionManagerEntity {
        char pad_0x38[0xC8];
    }; // 0x100
    static_assert(sizeof(ClientDakarInteractionManagerEntity) == 0x100);
}