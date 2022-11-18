// Object: Stat
// ClassId: 5259
// RuntimeId: 57195
// TypeInfo: 0x0000000144D6E330
#include "../CasablancaShared/AbstractStat.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class Stat : public CasablancaShared::AbstractStat {
        CString Code; // 0x18
        CString Description; // 0x20
    }; // 0x28
    static_assert(sizeof(Stat) == 0x28);
}
#pragma pack(pop)