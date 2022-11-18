// Object: ServerArmorVestLootType
// ClassId: 8534
// RuntimeId: 33635
// TypeInfo: 0x0000000144CDE360
#include "../Casablanca/ServerArmorLootType.h"

namespace Casablanca {
    class ServerArmorVestLootType : public Casablanca::ServerArmorLootType {
        char pad_0x50[0x8];
    }; // 0x58
    static_assert(sizeof(ServerArmorVestLootType) == 0x58);
}