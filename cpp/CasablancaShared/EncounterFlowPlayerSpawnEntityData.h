// Object: EncounterFlowPlayerSpawnEntityData
// ClassId: 3368
// RuntimeId: 51284
// TypeInfo: 0x0000000144D0BFB0
#include "../Entity/SpatialEntityData.h"
#include "../CasablancaShared/EncounterPlayerSpawnType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class EncounterFlowPlayerSpawnEntityData : public Entity::SpatialEntityData {
        Array<CasablancaShared::EncounterPlayerSpawnType> SpawnTypes; // 0x60
        Boolean Enabled; // 0x68
        char pad_0x69[0x7];
    }; // 0x70
    static_assert(sizeof(EncounterFlowPlayerSpawnEntityData) == 0x70);
}
#pragma pack(pop)