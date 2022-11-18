// Object: BFSpartaPartySetGamegroupMemberAttribute
// ClassId: 4722
// RuntimeId: 45753
// TypeInfo: 0x0000000144C6FF20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"
#include "../Global/CString.h"
#include "../Casablanca/BFIncomingSpartaUserId.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartySetGamegroupMemberAttribute : public SpartaShared::SpartaPayload {
        Uint64 PartyId; // 0x18
        CString Attribute; // 0x20
        CString Value; // 0x28
        Casablanca::BFIncomingSpartaUserId UserId; // 0x30
    }; // 0x38
    static_assert(sizeof(BFSpartaPartySetGamegroupMemberAttribute) == 0x38);
}
#pragma pack(pop)