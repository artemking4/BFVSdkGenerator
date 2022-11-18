// Object: BFUIClassFilterEntityBaseData
// ClassId: 2195
// RuntimeId: 60602
// TypeInfo: 0x0000000144D81920
#include "../CasablancaShared/BFUIFilterEntityBaseData.h"
#include "../Global/Boolean.h"

namespace CasablancaShared {
    class BFUIClassFilterEntityBaseData : public CasablancaShared::BFUIFilterEntityBaseData {
        Boolean IncludeInvalidClass; // 0x28
        Boolean ExcludeInvalidClass; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(BFUIClassFilterEntityBaseData) == 0x30);
}