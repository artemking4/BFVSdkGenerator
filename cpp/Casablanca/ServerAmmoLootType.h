// Object: ServerAmmoLootType
// ClassId: 8532
// RuntimeId: 37723
// TypeInfo: 0x0000000144CDE460
#include "../Casablanca/ServerWeaponLootType.h"

namespace Casablanca {
    class ServerAmmoLootType : public Casablanca::ServerWeaponLootType {
        char pad_0x48[0x8];
    }; // 0x50
    static_assert(sizeof(ServerAmmoLootType) == 0x50);
}