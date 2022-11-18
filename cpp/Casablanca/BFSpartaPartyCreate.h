// Object: BFSpartaPartyCreate
// ClassId: 4707
// RuntimeId: 12123
// TypeInfo: 0x0000000144C708A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"
#include "../Global/Boolean.h"
#include "../Casablanca/BFSpartaPartyPresenceMode.h"
#include "../Casablanca/BFSpartaIncomingGroupAttribute.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyCreate : public SpartaShared::SpartaPayload {
        Uint64 MaxMembers; // 0x18
        Casablanca::BFSpartaPartyPresenceMode PresenceMode; // 0x20
        char pad_0x24[0x4];
        Array<Casablanca::BFSpartaIncomingGroupAttribute> Attributes; // 0x28
        CString TemplateName; // 0x30
        Boolean EnableVoip; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(BFSpartaPartyCreate) == 0x40);
}
#pragma pack(pop)