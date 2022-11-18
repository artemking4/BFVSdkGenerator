// Object: BFUIAffectingBoostObjectAttributes
// ClassId: 4105
// RuntimeId: 3666
// TypeInfo: 0x0000000144D30720
#include "../CasablancaShared/Identifiable.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAffectingBoostObjectAttributes : public CasablancaShared::Identifiable {
        CString Name; // 0x18
        Float32 TotalIncreaseValue; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUIAffectingBoostObjectAttributes) == 0x28);
}
#pragma pack(pop)