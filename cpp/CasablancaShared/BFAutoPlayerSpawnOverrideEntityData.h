// Object: BFAutoPlayerSpawnOverrideEntityData
// ClassId: 2091
// RuntimeId: 5898
// TypeInfo: 0x0000000144D4CB70
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFAutoPlayerSpawnOverrideEntityData : public Entity::EntityData {
        CString SpawnerName; // 0x20
        Float32 SpawnRadius; // 0x28
        char pad_0x2C[0x4];
        Array<GameShared::UnlockAssetBase> UnlockAssets; // 0x30
    }; // 0x38
    static_assert(sizeof(BFAutoPlayerSpawnOverrideEntityData) == 0x38);
}
#pragma pack(pop)