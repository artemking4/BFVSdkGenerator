// Object: CasablancaSpartaReceiveMarketplaceInfosMessage
// ClassId: 4795
// RuntimeId: 34286
// TypeInfo: 0x0000000144C74530
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Guid.h"
#include "../Casablanca/CasablancaSpartaMarketplaceItem.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaReceiveMarketplaceInfosMessage : public SpartaShared::SpartaPayload {
        Guid RequestId; // 0x18
        Array<Casablanca::CasablancaSpartaMarketplaceItem> Items; // 0x28
    }; // 0x30
    static_assert(sizeof(CasablancaSpartaReceiveMarketplaceInfosMessage) == 0x30);
}
#pragma pack(pop)