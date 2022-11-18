// Object: FootprintEntityData
// ClassId: 3374
// RuntimeId: 50989
// TypeInfo: 0x0000000144D09930
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Entity/PrefabBlueprint.h"
#include "../CasablancaShared/FootprintSize.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class FootprintEntityData : public Entity::SpatialEntityData {
        Entity::PrefabBlueprint FootprintPrefabOverride; // 0x60
        CasablancaShared::FootprintSize Size; // 0x68
        Boolean Enabled; // 0x70
        Boolean IsInterior; // 0x71
        Boolean IsNextToWall; // 0x72
        char pad_0x73[0xD];
    }; // 0x80
    static_assert(sizeof(FootprintEntityData) == 0x80);
}
#pragma pack(pop)