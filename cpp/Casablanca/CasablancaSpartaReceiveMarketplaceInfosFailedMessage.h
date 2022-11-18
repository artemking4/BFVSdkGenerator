// Object: CasablancaSpartaReceiveMarketplaceInfosFailedMessage
// ClassId: 4794
// RuntimeId: 43125
// TypeInfo: 0x0000000144C744B0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaReceiveMarketplaceInfosFailedMessage : public SpartaShared::SpartaPayload {
        Guid RequestId; // 0x18
        CString Reason; // 0x28
    }; // 0x30
    static_assert(sizeof(CasablancaSpartaReceiveMarketplaceInfosFailedMessage) == 0x30);
}
#pragma pack(pop)