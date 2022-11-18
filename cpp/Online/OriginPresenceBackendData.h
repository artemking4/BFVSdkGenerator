// Object: OriginPresenceBackendData
// ClassId: 642
// RuntimeId: 24395
// TypeInfo: 0x0000000144F03490
#include "../Online/PresenceBackendData.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Online/OriginPartyType.h"

#pragma pack(push, 8)
namespace Online {
    class OriginPresenceBackendData : public Online::PresenceBackendData {
        Array<CString> CommerceCategories; // 0x20
        CString SecretKey; // 0x28
        Int32 Timeout; // 0x30
        Int32 InviteAcceptTimeout; // 0x34
        Online::OriginPartyType PartyType; // 0x38
        Boolean PartySupportEnabled; // 0x3C
        Boolean DisableAchievements; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(OriginPresenceBackendData) == 0x40);
}
#pragma pack(pop)