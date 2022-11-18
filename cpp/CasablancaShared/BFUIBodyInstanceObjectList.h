// Object: BFUIBodyInstanceObjectList
// ClassId: 5480
// RuntimeId: 16509
// TypeInfo: 0x0000000144D7FA20
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIBodyInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBodyInstanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIBodyInstanceObject> Bodys; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIBodyInstanceObjectList) == 0x20);
}
#pragma pack(pop)