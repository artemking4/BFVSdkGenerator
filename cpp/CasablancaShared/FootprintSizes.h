// Object: FootprintSizes
// ClassId: 828
// RuntimeId: 24114
// TypeInfo: 0x0000000144D0A130
#include "../CasablancaShared/FootprintTreeBase.h"
#include "../CasablancaShared/FootprintSize.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FootprintSizes : public CasablancaShared::FootprintTreeBase {
        Array<CasablancaShared::FootprintSize> Sizes; // 0x20
    }; // 0x28
    static_assert(sizeof(FootprintSizes) == 0x28);
}
#pragma pack(pop)