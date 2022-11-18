// Object: BFUIBodyObjectList
// ClassId: 5481
// RuntimeId: 52720
// TypeInfo: 0x0000000144D848A0
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIBodyObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBodyObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIBodyObject> Bodys; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIBodyObjectList) == 0x20);
}
#pragma pack(pop)