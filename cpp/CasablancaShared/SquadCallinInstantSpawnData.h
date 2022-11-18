// Object: SquadCallinInstantSpawnData
// ClassId: 400
// RuntimeId: 50558
// TypeInfo: 0x0000000144D350B0
#include "../CasablancaShared/SquadCallinBaseData.h"
#include "../Entity/PrefabBlueprint.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadCallinInstantSpawnData : public CasablancaShared::SquadCallinBaseData {
        Entity::PrefabBlueprint AssetPrefab; // 0x70
    }; // 0x78
    static_assert(sizeof(SquadCallinInstantSpawnData) == 0x78);
}
#pragma pack(pop)