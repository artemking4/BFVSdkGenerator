// Object: BFSpartaPartySetGamegroupAttribute
// ClassId: 4721
// RuntimeId: 6336
// TypeInfo: 0x0000000144C6FFA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartySetGamegroupAttribute : public SpartaShared::SpartaPayload {
        Uint64 PartyId; // 0x18
        CString Attribute; // 0x20
        CString Value; // 0x28
    }; // 0x30
    static_assert(sizeof(BFSpartaPartySetGamegroupAttribute) == 0x30);
}
#pragma pack(pop)