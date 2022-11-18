// Object: SpartaJoinGamePayload
// ClassId: 4827
// RuntimeId: 17653
// TypeInfo: 0x0000000144F4FEC0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../SpartaShared/SpartaUserId.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaJoinGamePayload : public SpartaShared::SpartaPayload {
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
        char pad_0x65[0x3];
    }; // 0x68
    static_assert(sizeof(SpartaJoinGamePayload) == 0x68);
}
#pragma pack(pop)