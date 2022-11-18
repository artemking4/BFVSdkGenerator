// Object: Ps4PresenceBackendData
// ClassId: 644
// RuntimeId: 5690
// TypeInfo: 0x0000000144F03790
#include "../Online/PresenceBackendData.h"
#include "../Online/Ps4AgeSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Online {
    class Ps4PresenceBackendData : public Online::PresenceBackendData {
        Online::Ps4AgeSettings AgeSettings; // 0x20
        Int32 InviteAcceptTimeout; // 0x30
        Boolean MultiplayerPrivilegeNeeded; // 0x34
        Boolean AutoAcquireMpPrivilege; // 0x35
        Boolean ShowChatRestrictionDialog; // 0x36
        Boolean ShowUgcRestrictionDialog; // 0x37
        Boolean DisableTrophies; // 0x38
        Boolean PartySupportEnabled; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(Ps4PresenceBackendData) == 0x40);
}
#pragma pack(pop)