// Object: ShowNameList
// ClassId: 4622
// RuntimeId: 43836
// TypeInfo: 0x0000000144D87620
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ShowNameList : public Core::DataContainer {
        Array<CString> ShowName; // 0x18
    }; // 0x20
    static_assert(sizeof(ShowNameList) == 0x20);
}
#pragma pack(pop)