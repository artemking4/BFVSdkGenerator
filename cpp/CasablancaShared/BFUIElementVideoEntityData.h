// Object: BFUIElementVideoEntityData
// ClassId: 3672
// RuntimeId: 9104
// TypeInfo: 0x0000000144D9D190
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementVideoEntityData : public CasablancaShared::BFUIElementEntityData {
        CString VideoPlayerIdentifier; // 0x130
        Boolean Fullscreen; // 0x138
        char pad_0x139[0x7];
    }; // 0x140
    static_assert(sizeof(BFUIElementVideoEntityData) == 0x140);
}
#pragma pack(pop)