// Object: ServerArmorLootType
// ClassId: 8533
// RuntimeId: 55849
// TypeInfo: 0x0000000144CDE3E0
#include "../Casablanca/ServerWeaponLootType.h"

namespace Casablanca {
    class ServerArmorLootType : public Casablanca::ServerWeaponLootType {
        char pad_0x48[0x8];
    }; // 0x50
    static_assert(sizeof(ServerArmorLootType) == 0x50);
}