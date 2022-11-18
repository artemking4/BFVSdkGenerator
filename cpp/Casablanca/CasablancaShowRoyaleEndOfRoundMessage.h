// Object: CasablancaShowRoyaleEndOfRoundMessage
// ClassId: 4814
// RuntimeId: 22365
// TypeInfo: 0x0000000144C722A0
#include "../Casablanca/EndOfRoundPayload.h"
#include "../CasablancaShared/UIScoreboardTeamColumn.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaShowRoyaleEndOfRoundMessage : public Casablanca::EndOfRoundPayload {
        CasablancaShared::UIScoreboardTeamColumn LocalTeamScoreboard; // 0x30
        Int32 FinalStanding; // 0x38
        Int32 MaxTeams; // 0x3C
    }; // 0x40
    static_assert(sizeof(CasablancaShowRoyaleEndOfRoundMessage) == 0x40);
}
#pragma pack(pop)