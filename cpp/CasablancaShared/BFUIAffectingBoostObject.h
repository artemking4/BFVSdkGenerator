// Object: BFUIAffectingBoostObject
// ClassId: 4104
// RuntimeId: 56428
// TypeInfo: 0x0000000144D2F7B0
#include "../CasablancaShared/Identifiable.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAffectingBoostObject : public CasablancaShared::Identifiable {
        CString IdName; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIAffectingBoostObject) == 0x20);
}
#pragma pack(pop)