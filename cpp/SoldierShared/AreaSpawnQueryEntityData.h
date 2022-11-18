// Object: AreaSpawnQueryEntityData
// ClassId: 2062
// RuntimeId: 24350
// TypeInfo: 0x0000000144F42730
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class AreaSpawnQueryEntityData : public Entity::EntityData {
        Float32 SpawnRadius; // 0x20
        Boolean FaceRandomDirection; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(AreaSpawnQueryEntityData) == 0x28);
}
#pragma pack(pop)