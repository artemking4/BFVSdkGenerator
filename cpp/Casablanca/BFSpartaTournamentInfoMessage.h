// Object: BFSpartaTournamentInfoMessage
// ClassId: 4747
// RuntimeId: 24339
// TypeInfo: 0x0000000144C6EF20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Casablanca/TournamentTeamData.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaTournamentInfoMessage : public SpartaShared::SpartaPayload {
        CString TournamentTitle; // 0x18
        Casablanca::TournamentTeamData YourTeamData; // 0x20
        Casablanca::TournamentTeamData EnemyTeamData; // 0x38
    }; // 0x50
    static_assert(sizeof(BFSpartaTournamentInfoMessage) == 0x50);
}
#pragma pack(pop)