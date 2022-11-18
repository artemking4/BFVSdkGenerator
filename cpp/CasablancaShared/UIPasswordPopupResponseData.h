// Object: UIPasswordPopupResponseData
// ClassId: 5514
// RuntimeId: 37527
// TypeInfo: 0x0000000144D9AF10
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIPasswordPopupResponseData : public Core::DataContainer {
        CString Password; // 0x18
        Boolean IsValidPassword; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UIPasswordPopupResponseData) == 0x28);
}
#pragma pack(pop)