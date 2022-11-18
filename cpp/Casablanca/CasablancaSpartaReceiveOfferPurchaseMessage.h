// Object: CasablancaSpartaReceiveOfferPurchaseMessage
// ClassId: 4797
// RuntimeId: 16196
// TypeInfo: 0x0000000144C74830
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Guid.h"
#include "../Casablanca/CasablancaSpartaPurchasedItem.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaReceiveOfferPurchaseMessage : public SpartaShared::SpartaPayload {
        Guid AssetGuid; // 0x18
        Array<Casablanca::CasablancaSpartaPurchasedItem> ReceivedItems; // 0x28
    }; // 0x30
    static_assert(sizeof(CasablancaSpartaReceiveOfferPurchaseMessage) == 0x30);
}
#pragma pack(pop)