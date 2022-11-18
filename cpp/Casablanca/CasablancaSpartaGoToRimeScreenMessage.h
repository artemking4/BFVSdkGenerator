// Object: CasablancaSpartaGoToRimeScreenMessage
// ClassId: 4784
// RuntimeId: 29459
// TypeInfo: 0x0000000144C74730
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaGoToRimeScreenMessage : public SpartaShared::SpartaPayload {
        CString Screen; // 0x18
        CString Data; // 0x20
    }; // 0x28
    static_assert(sizeof(CasablancaSpartaGoToRimeScreenMessage) == 0x28);
}
#pragma pack(pop)