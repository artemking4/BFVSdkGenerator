// Object: BFUIElementChatLayoutEntityData
// ClassId: 3648
// RuntimeId: 39298
// TypeInfo: 0x0000000144D9C990
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementChatLayoutEntityData : public CasablancaShared::BFUIElementEntityData {
        CString CodeAccessIdentifier; // 0x130
        char pad_0x138[0x8];
    }; // 0x140
    static_assert(sizeof(BFUIElementChatLayoutEntityData) == 0x140);
}
#pragma pack(pop)