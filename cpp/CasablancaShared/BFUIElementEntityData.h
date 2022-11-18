// Object: BFUIElementEntityData
// ClassId: 3634
// RuntimeId: 57228
// TypeInfo: 0x0000000144D6D6B0
#include "../RimeElementsShared/RimeElementBaseData.h"
#include "../CasablancaShared/BFUICustomLayout.h"
#include "../Global/Boolean.h"

namespace CasablancaShared {
    class BFUIElementEntityData : public RimeElementsShared::RimeElementBaseData {
        CasablancaShared::BFUICustomLayout CustomLayout; // 0x110
        Boolean ExcludeFromLayoutContainer; // 0x124
        char pad_0x125[0xB];
    }; // 0x130
    static_assert(sizeof(BFUIElementEntityData) == 0x130);
}