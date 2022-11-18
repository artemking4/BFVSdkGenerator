// Object: ActionSidCollection
// ClassId: 97
// RuntimeId: 3150
// TypeInfo: 0x0000000144D878A0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ActionSidCollection : public Core::DataContainer {
        Array<CString> ActionSids; // 0x18
    }; // 0x20
    static_assert(sizeof(ActionSidCollection) == 0x20);
}
#pragma pack(pop)