// Object: CasablancaSpartaReceiveEmblemFailedMessage
// ClassId: 4792
// RuntimeId: 11606
// TypeInfo: 0x0000000144C73220
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaReceiveEmblemFailedMessage : public SpartaShared::SpartaPayload {
        CString Reason; // 0x18
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaReceiveEmblemFailedMessage) == 0x20);
}
#pragma pack(pop)