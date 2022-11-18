// Object: UIPasswordPopupInstanceData
// ClassId: 5518
// RuntimeId: 18908
// TypeInfo: 0x0000000144D9AF90
#include "../CasablancaShared/UIGenericPopupInstanceData.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIPasswordPopupInstanceData : public CasablancaShared::UIGenericPopupInstanceData {
        CString Secret; // 0x38
        Uint32 MinimumSize; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(UIPasswordPopupInstanceData) == 0x48);
}
#pragma pack(pop)