// Object: FootprintSystemEntityData
// ClassId: 2766
// RuntimeId: 23412
// TypeInfo: 0x0000000144D097B0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../CasablancaShared/FootprintBiome.h"
#include "../CasablancaShared/FootprintBiomeList.h"
#include "../CasablancaShared/FootprintThemeFilter.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FootprintSystemEntityData : public Entity::EntityData {
        CString BiomeName; // 0x20
        CasablancaShared::FootprintBiome Biome; // 0x28
        CasablancaShared::FootprintBiomeList BiomeList; // 0x30
        CasablancaShared::FootprintThemeFilter ThemeFilter; // 0x38
        Boolean DisableDestructionDepth; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(FootprintSystemEntityData) == 0x48);
}
#pragma pack(pop)