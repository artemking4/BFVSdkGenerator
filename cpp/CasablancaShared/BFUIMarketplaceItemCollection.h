// Object: BFUIMarketplaceItemCollection
// ClassId: 1228
// RuntimeId: 23888
// TypeInfo: 0x0000000144D85E20
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIMarketplaceItem.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIMarketplaceItemCollection : public Core::DataContainer {
        Array<CasablancaShared::BFUIMarketplaceItem> MarketplaceItems; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIMarketplaceItemCollection) == 0x20);
}
#pragma pack(pop)