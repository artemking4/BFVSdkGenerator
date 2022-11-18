// Object: ServerBlueprintSpawnEntity
// ClassId: 7847
// RuntimeId: 34260
// TypeInfo: 0x0000000144DAAB00
#include "../DiceCommons/BlueprintSpawnEntity.h"

namespace DiceCommons {
    class ServerBlueprintSpawnEntity : public DiceCommons::BlueprintSpawnEntity {
        char pad_0x108[0x80];
    }; // 0x188
    static_assert(sizeof(ServerBlueprintSpawnEntity) == 0x188);
}