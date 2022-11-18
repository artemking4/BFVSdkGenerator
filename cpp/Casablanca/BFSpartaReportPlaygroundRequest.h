// Object: BFSpartaReportPlaygroundRequest
// ClassId: 4852
// RuntimeId: 48644
// TypeInfo: 0x0000000144C6F7A0
#include "../SpartaShared/SpartaSimplePayload.h"
#include "../Global/CString.h"
#include "../Casablanca/PlaygroundReportCategory.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaReportPlaygroundRequest : public SpartaShared::SpartaSimplePayload {
        CString ProtocolVersion; // 0x18
        CString PlaygroundId; // 0x20
        Casablanca::PlaygroundReportCategory Category; // 0x28
        char pad_0x2C[0x4];
        CString RequesterEmail; // 0x30
        CString Subject; // 0x38
    }; // 0x40
    static_assert(sizeof(BFSpartaReportPlaygroundRequest) == 0x40);
}
#pragma pack(pop)