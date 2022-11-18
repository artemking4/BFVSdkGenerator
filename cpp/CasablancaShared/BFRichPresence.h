// Object: BFRichPresence
// ClassId: 610
// RuntimeId: 53347
// TypeInfo: 0x0000000144D314A0
#include "../Online/OnlineRichPresenceData.h"
#include "../Online/OnlineRichPresenceString.h"
#include "../CasablancaShared/GameModeOverride.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFRichPresence : public Online::OnlineRichPresenceData {
        Online::OnlineRichPresenceString MultiplayerRichPresence; // 0x38
        Online::OnlineRichPresenceString SingleplayerRichPresence; // 0x40
        Online::OnlineRichPresenceString FrontendRichPresence; // 0x48
        Online::OnlineRichPresenceString FrontendInSquadRichPresence; // 0x50
        Online::OnlineRichPresenceString SpectatorRichPresence; // 0x58
        Array<CasablancaShared::GameModeOverride> GameModeOverrides; // 0x60
    }; // 0x68
    static_assert(sizeof(BFRichPresence) == 0x68);
}
#pragma pack(pop)