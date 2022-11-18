// Object: ServerLootLocation
// ClassId: 7990
// RuntimeId: 18284
// TypeInfo: 0x0000000144C5E250
#include "../DiceCommons/LocalLocatorEntity.h"

namespace Casablanca {
    class ServerLootLocation : public DiceCommons::LocalLocatorEntity {
        char pad_0x90[0x20];
    }; // 0xB0
    static_assert(sizeof(ServerLootLocation) == 0xB0);
}