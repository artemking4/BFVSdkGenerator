// Object: SubWorldData
// ClassId: 277
// RuntimeId: 12461
// TypeInfo: 0x0000000144EE6850
#include "../Entity/SpatialPrefabBlueprint.h"
#include "../Entity/MaterialGridData.h"
#include "../Global/Boolean.h"
#include "../Entity/BlueprintPersistenceSetting.h"
#include "../Entity/AutoAssetCollector.h"

#pragma pack(push, 8)
namespace Entity {
    class SubWorldData : public Entity::SpatialPrefabBlueprint {
        Entity::MaterialGridData RuntimeMaterialGrid; // 0x58
        Entity::BlueprintPersistenceSetting PersistenceSetting; // 0x60
        char pad_0x64[0x4];
        Entity::AutoAssetCollector AutoAssetCollector; // 0x68
        Boolean IsWin32SubLevel; // 0x70
        Boolean IsGen4aSubLevel; // 0x71
        Boolean IsGen4bSubLevel; // 0x72
        Boolean IsLinuxSubLevel; // 0x73
        Boolean IsXenonSubLevel; // 0x74
        Boolean IsPs3SubLevel; // 0x75
        Boolean IsAndroidSubLevel; // 0x76
        Boolean IsIOSSubLevel; // 0x77
        Boolean IsOSXSubLevel; // 0x78
        char pad_0x79[0x7];
    }; // 0x80
    static_assert(sizeof(SubWorldData) == 0x80);
}
#pragma pack(pop)