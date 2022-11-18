// Object: CasablancaReportEmblemMessage
// ClassId: 4769
// RuntimeId: 17599
// TypeInfo: 0x0000000144C71BA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaReportEmblemMessage : public SpartaShared::SpartaPayload {
        CString PersonaId; // 0x18
    }; // 0x20
    static_assert(sizeof(CasablancaReportEmblemMessage) == 0x20);
}
#pragma pack(pop)