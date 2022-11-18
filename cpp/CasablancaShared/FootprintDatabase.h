// Object: FootprintDatabase
// ClassId: 827
// RuntimeId: 59234
// TypeInfo: 0x0000000144D09D30
#include "../CasablancaShared/FootprintTreeBase.h"
#include "../CasablancaShared/FootprintSizeGroup.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FootprintDatabase : public CasablancaShared::FootprintTreeBase {
        Array<CasablancaShared::FootprintSizeGroup> SizeGroups; // 0x20
    }; // 0x28
    static_assert(sizeof(FootprintDatabase) == 0x28);
}
#pragma pack(pop)