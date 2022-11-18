// Object: CasablancaSpartaReceiveOfferPurchaseFailedMessage
// ClassId: 4796
// RuntimeId: 42595
// TypeInfo: 0x0000000144C747B0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaReceiveOfferPurchaseFailedMessage : public SpartaShared::SpartaPayload {
        Guid AssetGuid; // 0x18
        CString Reason; // 0x28
    }; // 0x30
    static_assert(sizeof(CasablancaSpartaReceiveOfferPurchaseFailedMessage) == 0x30);
}
#pragma pack(pop)