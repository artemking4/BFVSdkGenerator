// Object: ClientArmorLootType
// ClassId: 64
// RuntimeId: 10459
// TypeInfo: 0x0000000144CCFD60
#include "../Casablanca/ClientWeaponLootType.h"

namespace Casablanca {
    class ClientArmorLootType : public Casablanca::ClientWeaponLootType {
        char pad_0x70[0x10];
    }; // 0x80
    static_assert(sizeof(ClientArmorLootType) == 0x80);
}