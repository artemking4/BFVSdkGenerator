// Object: ServerWeaponLootType
// ClassId: 8531
// RuntimeId: 40912
// TypeInfo: 0x0000000144CDE060
#include "../Casablanca/ServerLootType.h"

namespace Casablanca {
    class ServerWeaponLootType : public Casablanca::ServerLootType {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerWeaponLootType) == 0x48);
}