// Object: FootprintBiomeList
// ClassId: 826
// RuntimeId: 50348
// TypeInfo: 0x0000000144D09BB0
#include "../CasablancaShared/FootprintTreeBase.h"
#include "../CasablancaShared/FootprintBiome.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FootprintBiomeList : public CasablancaShared::FootprintTreeBase {
        Array<CasablancaShared::FootprintBiome> Biomes; // 0x20
    }; // 0x28
    static_assert(sizeof(FootprintBiomeList) == 0x28);
}
#pragma pack(pop)