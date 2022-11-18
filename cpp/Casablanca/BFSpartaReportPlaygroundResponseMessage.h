// Object: BFSpartaReportPlaygroundResponseMessage
// ClassId: 4853
// RuntimeId: 31766
// TypeInfo: 0x0000000144C6F4A0
#include "../SpartaShared/SpartaSimplePayload.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaReportPlaygroundResponseMessage : public SpartaShared::SpartaSimplePayload {
        CString PetitionId; // 0x18
        Boolean Success; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFSpartaReportPlaygroundResponseMessage) == 0x28);
}
#pragma pack(pop)