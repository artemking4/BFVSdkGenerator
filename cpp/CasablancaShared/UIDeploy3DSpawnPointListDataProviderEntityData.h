// Object: UIDeploy3DSpawnPointListDataProviderEntityData
// ClassId: 3629
// RuntimeId: 60860
// TypeInfo: 0x0000000144D1EAF0
#include "../Entity/EntityData.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDeploy3DSpawnPointListDataProviderEntityData : public Entity::EntityData {
        Uint64 SelectedSpawnPointId; // 0x20
    }; // 0x28
    static_assert(sizeof(UIDeploy3DSpawnPointListDataProviderEntityData) == 0x28);
}
#pragma pack(pop)