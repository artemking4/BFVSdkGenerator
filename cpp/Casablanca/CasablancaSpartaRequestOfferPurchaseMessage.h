// Object: CasablancaSpartaRequestOfferPurchaseMessage
// ClassId: 4802
// RuntimeId: 59644
// TypeInfo: 0x0000000144C748B0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaRequestOfferPurchaseMessage : public SpartaShared::SpartaPayload {
        Guid AssetGuid; // 0x18
        CString OfferAlias; // 0x28
        CString Price; // 0x30
    }; // 0x38
    static_assert(sizeof(CasablancaSpartaRequestOfferPurchaseMessage) == 0x38);
}
#pragma pack(pop)