// Object: WorldData
// ClassId: 278
// RuntimeId: 56614
// TypeInfo: 0x0000000144EE67D0
#include "../Entity/SubWorldData.h"
#include "../Global/Boolean.h"
#include "../Entity/SubWorldDataComponent.h"

#pragma pack(push, 8)
namespace Entity {
    class WorldData : public Entity::SubWorldData {
        Array<Entity::SubWorldDataComponent> Components; // 0x80
        Boolean IsProceduralLevel; // 0x88
        char pad_0x89[0x7];
    }; // 0x90
    static_assert(sizeof(WorldData) == 0x90);
}
#pragma pack(pop)