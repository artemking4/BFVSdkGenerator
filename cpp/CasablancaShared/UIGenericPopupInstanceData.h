// Object: UIGenericPopupInstanceData
// ClassId: 5517
// RuntimeId: 25979
// TypeInfo: 0x0000000144D9B110
#include "../CasablancaShared/UIPopupInstanceData.h"
#include "../Global/CString.h"
#include "../CasablancaShared/UIPopupInstanceButtonWrapper.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIGenericPopupInstanceData : public CasablancaShared::UIPopupInstanceData {
        CString Header; // 0x18
        CString Subheader; // 0x20
        CString Text; // 0x28
        Array<CasablancaShared::UIPopupInstanceButtonWrapper> Buttons; // 0x30
    }; // 0x38
    static_assert(sizeof(UIGenericPopupInstanceData) == 0x38);
}
#pragma pack(pop)