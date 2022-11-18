// Object: SquadCallinDangerZoneData
// ClassId: 399
// RuntimeId: 62360
// TypeInfo: 0x0000000144D354B0
#include "../CasablancaShared/SquadCallinBaseData.h"
#include "../Entity/PrefabBlueprint.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadCallinDangerZoneData : public CasablancaShared::SquadCallinBaseData {
        Entity::PrefabBlueprint ZonePrefabBlueprint; // 0x70
        Float32 ZoneActiveTime; // 0x78
        Float32 SpawnAltitude; // 0x7C
    }; // 0x80
    static_assert(sizeof(SquadCallinDangerZoneData) == 0x80);
}
#pragma pack(pop)