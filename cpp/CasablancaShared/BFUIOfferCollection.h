// Object: BFUIOfferCollection
// ClassId: 1230
// RuntimeId: 11038
// TypeInfo: 0x0000000144D85F20
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIOffer.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIOfferCollection : public Core::DataContainer {
        Array<CasablancaShared::BFUIOffer> Offers; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIOfferCollection) == 0x20);
}
#pragma pack(pop)