// Object: ClientMeleeLootType
// ClassId: 68
// RuntimeId: 61820
// TypeInfo: 0x0000000144C882E0
#include "../Casablanca/ClientWeaponLootType.h"

namespace Casablanca {
    class ClientMeleeLootType : public Casablanca::ClientWeaponLootType {
        char pad_0x70[0x10];
    }; // 0x80
    static_assert(sizeof(ClientMeleeLootType) == 0x80);
}