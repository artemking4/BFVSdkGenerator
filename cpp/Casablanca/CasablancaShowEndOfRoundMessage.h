// Object: CasablancaShowEndOfRoundMessage
// ClassId: 4813
// RuntimeId: 53167
// TypeInfo: 0x0000000144C723A0
#include "../Casablanca/EndOfRoundPayload.h"
#include "../Casablanca/CasablancaEndOfRoundType.h"
#include "../CasablancaShared/UIScoreboardTeamColumn.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaShowEndOfRoundMessage : public Casablanca::EndOfRoundPayload {
        Casablanca::CasablancaEndOfRoundType EndOfRoundType; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::UIScoreboardTeamColumn LocalTeamScoreboard; // 0x38
    }; // 0x40
    static_assert(sizeof(CasablancaShowEndOfRoundMessage) == 0x40);
}
#pragma pack(pop)