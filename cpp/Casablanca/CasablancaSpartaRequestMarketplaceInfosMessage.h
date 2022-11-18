// Object: CasablancaSpartaRequestMarketplaceInfosMessage
// ClassId: 4801
// RuntimeId: 18952
// TypeInfo: 0x0000000144C745B0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaRequestMarketplaceInfosMessage : public SpartaShared::SpartaPayload {
        Guid RequestId; // 0x18
        Array<Guid> AssetGuids; // 0x28
    }; // 0x30
    static_assert(sizeof(CasablancaSpartaRequestMarketplaceInfosMessage) == 0x30);
}
#pragma pack(pop)