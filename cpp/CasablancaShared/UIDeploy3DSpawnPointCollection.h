// Object: UIDeploy3DSpawnPointCollection
// ClassId: 5390
// RuntimeId: 64536
// TypeInfo: 0x0000000144D1EBF0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIDeploy3DSpawnPoint.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDeploy3DSpawnPointCollection : public Core::DataContainer {
        Array<CasablancaShared::UIDeploy3DSpawnPoint> SpawnPoints; // 0x18
        Int32 SpawnPointsCount; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIDeploy3DSpawnPointCollection) == 0x28);
}
#pragma pack(pop)