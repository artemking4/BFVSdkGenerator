// Object: BFUIRankObject
// ClassId: 4110
// RuntimeId: 49953
// TypeInfo: 0x0000000144D86120
#include "../CasablancaShared/Identifiable.h"
#include "../CasablancaShared/BFUIRankType.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIRankObject : public CasablancaShared::Identifiable {
        CasablancaShared::BFUIRankType RankType; // 0x18
        Int32 Rank; // 0x1C
        CString Name; // 0x20
        CString Identifier; // 0x28
        char pad_0x30[0x10];
    }; // 0x40
    static_assert(sizeof(BFUIRankObject) == 0x40);
}
#pragma pack(pop)