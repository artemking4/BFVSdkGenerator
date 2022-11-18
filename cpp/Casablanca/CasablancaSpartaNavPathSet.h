// Object: CasablancaSpartaNavPathSet
// ClassId: 4791
// RuntimeId: 29303
// TypeInfo: 0x0000000144C71A20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaNavPathSet : public SpartaShared::SpartaPayload {
        CString Path; // 0x18
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaNavPathSet) == 0x20);
}
#pragma pack(pop)