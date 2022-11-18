// Object: ClientArmorVestLootType
// ClassId: 65
// RuntimeId: 44374
// TypeInfo: 0x0000000144CCFEE0
#include "../Casablanca/ClientArmorLootType.h"

namespace Casablanca {
    class ClientArmorVestLootType : public Casablanca::ClientArmorLootType {
        char pad_0x80[0x10];
    }; // 0x90
    static_assert(sizeof(ClientArmorVestLootType) == 0x90);
}