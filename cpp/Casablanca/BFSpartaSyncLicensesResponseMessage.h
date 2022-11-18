// Object: BFSpartaSyncLicensesResponseMessage
// ClassId: 4745
// RuntimeId: 63598
// TypeInfo: 0x0000000144C70A20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaSyncLicensesResponseMessage : public SpartaShared::SpartaPayload {
        Boolean Success; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(BFSpartaSyncLicensesResponseMessage) == 0x20);
}
#pragma pack(pop)