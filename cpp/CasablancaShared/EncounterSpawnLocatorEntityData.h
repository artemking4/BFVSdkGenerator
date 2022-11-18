// Object: EncounterSpawnLocatorEntityData
// ClassId: 3369
// RuntimeId: 21434
// TypeInfo: 0x0000000144D0BF30
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/EncounterSpawnLocatorType.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class EncounterSpawnLocatorEntityData : public Entity::SpatialEntityData {
        CasablancaShared::EncounterSpawnLocatorType SpawnLocatorType; // 0x60
        Int32 MinSpawnClusters; // 0x68
        Int32 MaxSpawnClusters; // 0x6C
        Boolean Enabled; // 0x70
        char pad_0x71[0xF];
    }; // 0x80
    static_assert(sizeof(EncounterSpawnLocatorEntityData) == 0x80);
}
#pragma pack(pop)