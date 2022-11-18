// Object: SquadCallinSupplyDropData
// ClassId: 402
// RuntimeId: 41113
// TypeInfo: 0x0000000144D353B0
#include "../CasablancaShared/SquadCallinBaseData.h"
#include "../Entity/PrefabBlueprint.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadCallinSupplyDropData : public CasablancaShared::SquadCallinBaseData {
        Entity::PrefabBlueprint CratePrefabBlueprint; // 0x70
        Float32 CrateActiveTime; // 0x78
        Float32 SpawnAltitude; // 0x7C
    }; // 0x80
    static_assert(sizeof(SquadCallinSupplyDropData) == 0x80);
}
#pragma pack(pop)