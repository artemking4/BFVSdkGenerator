// Object: DebugVehicleSpawnerEntityData
// ClassId: 2614
// RuntimeId: 44599
// TypeInfo: 0x0000000144D4AF70
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DebugVehicleSpawnerEntityData : public Entity::EntityData {
        Boolean CheckSpawnArea; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(DebugVehicleSpawnerEntityData) == 0x28);
}
#pragma pack(pop)