// Object: DurangoPresenceBackendData
// ClassId: 639
// RuntimeId: 24846
// TypeInfo: 0x0000000144F03710
#include "../Online/PresenceBackendData.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Online/DurangoCurrentActivity.h"

#pragma pack(push, 8)
namespace Online {
    class DurangoPresenceBackendData : public Online::PresenceBackendData {
        Uint32 TitleId; // 0x20
        Int32 InviteAcceptTimeout; // 0x24
        CString ServiceConfigId; // 0x28
        CString PartySessionTemplate; // 0x30
        CString GameSessionTemplate; // 0x38
        CString PartyInviteContext; // 0x40
        CString GameInviteContext; // 0x48
        Online::DurangoCurrentActivity CurrentActivity; // 0x50
        Boolean MultiplayerPrivilegeNeeded; // 0x54
        Boolean AutoAcquireMpPrivilege; // 0x55
        Boolean EnableGameInviteSupport; // 0x56
        Boolean EnablePartySupport; // 0x57
        Boolean AutoCreateParty; // 0x58
        Boolean DisableAchievements; // 0x59
        char pad_0x5A[0x6];
    }; // 0x60
    static_assert(sizeof(DurangoPresenceBackendData) == 0x60);
}
#pragma pack(pop)