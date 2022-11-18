// Object: CasablancaSpartaJoinGamePayload
// ClassId: 4789
// RuntimeId: 7381
// TypeInfo: 0x0000000144C72AA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../SpartaShared/SpartaUserId.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaJoinGamePayload : public SpartaShared::SpartaPayload {
        CString FriendId; // 0x18
        CString PersonaId; // 0x20
        CString Password; // 0x28
        CString GameId; // 0x30
        SpartaShared::SpartaUserId SpartaUserId; // 0x38
        Boolean HasReservation; // 0x60
        Boolean AsSpectator; // 0x61
        Boolean AsCommander; // 0x62
        Boolean JoinWithParty; // 0x63
        Boolean PlatoonJoin; // 0x64
        Boolean IsCompetitive; // 0x65
        char pad_0x66[0x2];
    }; // 0x68
    static_assert(sizeof(CasablancaSpartaJoinGamePayload) == 0x68);
}
#pragma pack(pop)