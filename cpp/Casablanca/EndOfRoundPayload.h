// Object: EndOfRoundPayload
// ClassId: 4811
// RuntimeId: 1793
// TypeInfo: 0x0000000144C72420
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/AwardReportObjects.h"

namespace Casablanca {
    class EndOfRoundPayload : public SpartaShared::SpartaPayload {
        Uint64 RoundId; // 0x18
        CasablancaShared::AwardReportObjects AwardReports; // 0x20
        Boolean IsSpectator; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(EndOfRoundPayload) == 0x30);
}