// Object: ClientWeaponLootType
// ClassId: 62
// RuntimeId: 26158
// TypeInfo: 0x0000000144C88260
#include "../Casablanca/ClientLootType.h"

namespace Casablanca {
    class ClientWeaponLootType : public Casablanca::ClientLootType {
        char pad_0x38[0x38];
    }; // 0x70
    static_assert(sizeof(ClientWeaponLootType) == 0x70);
}