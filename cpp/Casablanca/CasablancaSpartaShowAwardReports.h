// Object: CasablancaSpartaShowAwardReports
// ClassId: 4806
// RuntimeId: 21473
// TypeInfo: 0x0000000144C720A0
#include "../SpartaShared/SpartaPayload.h"
#include "../CasablancaShared/AwardReportObjects.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaShowAwardReports : public SpartaShared::SpartaPayload {
        CasablancaShared::AwardReportObjects AwardReports; // 0x18
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaShowAwardReports) == 0x20);
}
#pragma pack(pop)