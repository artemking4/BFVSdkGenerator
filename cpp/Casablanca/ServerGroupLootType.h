// Object: ServerGroupLootType
// ClassId: 8530
// RuntimeId: 10536
// TypeInfo: 0x0000000144CDE1E0
#include "../Casablanca/ServerLootType.h"

namespace Casablanca {
    class ServerGroupLootType : public Casablanca::ServerLootType {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ServerGroupLootType) == 0x88);
}