// Object: AwardCategory
// ClassId: 1187
// RuntimeId: 2342
// TypeInfo: 0x0000000144D6C8B0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AwardCategory : public Core::DataContainer {
        CString Name; // 0x18
    }; // 0x20
    static_assert(sizeof(AwardCategory) == 0x20);
}
#pragma pack(pop)