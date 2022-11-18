// Object: ClientBlueprintSpawnEntity
// ClassId: 7846
// RuntimeId: 34579
// TypeInfo: 0x0000000144DAF4E0
#include "../DiceCommons/BlueprintSpawnEntity.h"

namespace DiceCommons {
    class ClientBlueprintSpawnEntity : public DiceCommons::BlueprintSpawnEntity {
        char pad_0x108[0xB0];
    }; // 0x1B8
    static_assert(sizeof(ClientBlueprintSpawnEntity) == 0x1B8);
}