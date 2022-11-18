// Object: ClientGroupLootType
// ClassId: 61
// RuntimeId: 54944
// TypeInfo: 0x0000000144C883E0
#include "../Casablanca/ClientLootType.h"

namespace Casablanca {
    class ClientGroupLootType : public Casablanca::ClientLootType {
        char pad_0x38[0x68];
    }; // 0xA0
    static_assert(sizeof(ClientGroupLootType) == 0xA0);
}