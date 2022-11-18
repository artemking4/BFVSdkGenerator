// Object: BFSpartaTournamentGameScoreMessage
// ClassId: 4746
// RuntimeId: 63273
// TypeInfo: 0x0000000144C6EEA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/TournamentScoreData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaTournamentGameScoreMessage : public SpartaShared::SpartaPayload {
        Casablanca::TournamentScoreData YourTeam; // 0x18
        Casablanca::TournamentScoreData EnemyTeam; // 0x28
        Int32 RoundNumber; // 0x38
        Int32 MaxNumberOfRounds; // 0x3C
    }; // 0x40
    static_assert(sizeof(BFSpartaTournamentGameScoreMessage) == 0x40);
}
#pragma pack(pop)