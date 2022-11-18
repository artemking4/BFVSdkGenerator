// Object: ClientAmmoLootType
// ClassId: 63
// RuntimeId: 58879
// TypeInfo: 0x0000000144CCFDE0
#include "../Casablanca/ClientWeaponLootType.h"

namespace Casablanca {
    class ClientAmmoLootType : public Casablanca::ClientWeaponLootType {
        char pad_0x70[0x10];
    }; // 0x80
    static_assert(sizeof(ClientAmmoLootType) == 0x80);
}