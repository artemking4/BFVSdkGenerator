// Object: CasablancaShowCoopEndOfRoundMessage
// ClassId: 4812
// RuntimeId: 29069
// TypeInfo: 0x0000000144C72320
#include "../Casablanca/EndOfRoundPayload.h"
#include "../CasablancaShared/UIScoreboardTeamColumn.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaShowCoopEndOfRoundMessage : public Casablanca::EndOfRoundPayload {
        CasablancaShared::UIScoreboardTeamColumn LocalTeamScoreboard; // 0x30
    }; // 0x38
    static_assert(sizeof(CasablancaShowCoopEndOfRoundMessage) == 0x38);
}
#pragma pack(pop)