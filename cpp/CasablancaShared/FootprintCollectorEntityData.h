// Object: FootprintCollectorEntityData
// ClassId: 2764
// RuntimeId: 18351
// TypeInfo: 0x0000000144D09830
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FootprintCollectorEntityData : public Entity::EntityData {
        Array<Uint32> OverrideThemeNameHashs; // 0x20
        Array<Uint32> ExcludeThemeNameHashs; // 0x28
        Int32 TwinThemeId; // 0x30
        Boolean AutoSpawnFootprints; // 0x34
        Boolean AllowPrefabOverride; // 0x35
        char pad_0x36[0x2];
    }; // 0x38
    static_assert(sizeof(FootprintCollectorEntityData) == 0x38);
}
#pragma pack(pop)