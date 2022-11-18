// Object: ZoneControlSpawnerEntityData
// ClassId: 3931
// RuntimeId: 40400
// TypeInfo: 0x0000000144D5C160
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Entity/PrefabBlueprint.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ZoneControlSpawnerEntityData : public Entity::EntityData {
        Array<CString> LocatorLinkNames; // 0x20
        Entity::PrefabBlueprint SupplyDropPrefab; // 0x28
        Boolean RandomizeSpawnLocations; // 0x30
        Boolean RandomizeYRotation; // 0x31
        Boolean EnableStaticLocatorSelection; // 0x32
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(ZoneControlSpawnerEntityData) == 0x38);
}
#pragma pack(pop)