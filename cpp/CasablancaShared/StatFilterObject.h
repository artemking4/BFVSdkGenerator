// Object: StatFilterObject
// ClassId: 4917
// RuntimeId: 17500
// TypeInfo: 0x0000000144D094B0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class StatFilterObject : public Core::DataContainer {
        CString GameMode; // 0x18
        Array<CString> Codes; // 0x20
    }; // 0x28
    static_assert(sizeof(StatFilterObject) == 0x28);
}
#pragma pack(pop)