// Object: OneOptionAxisEditableAction
// ClassId: 1536
// RuntimeId: 3315
// TypeInfo: 0x0000000144E6C450
#include "../GameShared/EditableAction.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class OneOptionAxisEditableAction : public GameShared::EditableAction {
        CString Header; // 0x20
        Boolean Invert; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(OneOptionAxisEditableAction) == 0x30);
}
#pragma pack(pop)