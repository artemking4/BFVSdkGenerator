// Object: CasablancaEnterSpartaMessage
// ClassId: 4766
// RuntimeId: 22319
// TypeInfo: 0x0000000144C724A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaEnterSpartaMessage : public SpartaShared::SpartaPayload {
        CString SpartaScreen; // 0x18
    }; // 0x20
    static_assert(sizeof(CasablancaEnterSpartaMessage) == 0x20);
}
#pragma pack(pop)