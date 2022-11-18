// Object: BFUIPurchaseResponseItemCollection
// ClassId: 1239
// RuntimeId: 17271
// TypeInfo: 0x0000000144D7FEA0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIPurchaseResponseItem.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPurchaseResponseItemCollection : public Core::DataContainer {
        Array<CasablancaShared::BFUIPurchaseResponseItem> PurchaseResponseItems; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIPurchaseResponseItemCollection) == 0x20);
}
#pragma pack(pop)