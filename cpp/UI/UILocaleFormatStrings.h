// Object: UILocaleFormatStrings
// ClassId: 5463
// RuntimeId: 39708
// TypeInfo: 0x0000000144EB3C30
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace UI {
    class UILocaleFormatStrings : public Core::DataContainer {
        CString NumberFormatSID; // 0x18
    }; // 0x20
    static_assert(sizeof(UILocaleFormatStrings) == 0x20);
}
#pragma pack(pop)