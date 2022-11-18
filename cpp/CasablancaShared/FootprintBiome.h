// Object: FootprintBiome
// ClassId: 5276
// RuntimeId: 4769
// TypeInfo: 0x0000000144D09C30
#include "../CasablancaShared/FootprintNodeBase.h"
#include "../CasablancaShared/FootprintBiomeTheme.h"
#include "../CasablancaShared/FootprintSize.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FootprintBiome : public CasablancaShared::FootprintNodeBase {
        Array<CasablancaShared::FootprintBiomeTheme> Themes; // 0x28
        Array<CasablancaShared::FootprintSize> SizesForAllThemes; // 0x30
    }; // 0x38
    static_assert(sizeof(FootprintBiome) == 0x38);
}
#pragma pack(pop)