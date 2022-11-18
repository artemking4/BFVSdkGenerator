// Object: OneOptionButtonEditableAction
// ClassId: 1537
// RuntimeId: 12189
// TypeInfo: 0x0000000144E6C4D0
#include "../GameShared/EditableAction.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class OneOptionButtonEditableAction : public GameShared::EditableAction {
        CString Header; // 0x20
    }; // 0x28
    static_assert(sizeof(OneOptionButtonEditableAction) == 0x28);
}
#pragma pack(pop)