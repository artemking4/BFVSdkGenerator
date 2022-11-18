// Object: BFUISpecialSpawnPointInfoEntityData
// ClassId: 2400
// RuntimeId: 64111
// TypeInfo: 0x0000000144D1ECF0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISpawnPointObject.h"
#include "../CasablancaShared/RankGateAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISpecialSpawnPointInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUISpawnPointObject SpawnPoint; // 0x20
        CasablancaShared::RankGateAsset KitTanker; // 0x28
        CasablancaShared::RankGateAsset KitPilot; // 0x30
        CasablancaShared::RankGateAsset RankIsHeldAsset; // 0x38
        Boolean UpdateAutomatically; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(BFUISpecialSpawnPointInfoEntityData) == 0x48);
}
#pragma pack(pop)