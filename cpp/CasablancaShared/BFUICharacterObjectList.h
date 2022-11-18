// Object: BFUICharacterObjectList
// ClassId: 5482
// RuntimeId: 59268
// TypeInfo: 0x0000000144D847A0
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUICharacterObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICharacterObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUICharacterObject> Characters; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUICharacterObjectList) == 0x20);
}
#pragma pack(pop)