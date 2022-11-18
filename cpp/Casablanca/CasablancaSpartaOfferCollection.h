// Object: CasablancaSpartaOfferCollection
// ClassId: 1292
// RuntimeId: 584
// TypeInfo: 0x0000000144C74BB0
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"
#include "../Casablanca/CasablancaSpartaOffer.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaOfferCollection : public Core::DataContainer {
        Guid AssetGuid; // 0x18
        Array<Casablanca::CasablancaSpartaOffer> Offers; // 0x28
    }; // 0x30
    static_assert(sizeof(CasablancaSpartaOfferCollection) == 0x30);
}
#pragma pack(pop)