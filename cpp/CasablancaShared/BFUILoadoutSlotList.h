// Object: BFUILoadoutSlotList
// ClassId: 1224
// RuntimeId: 38879
// TypeInfo: 0x0000000144D4C770
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUILoadoutSlotData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILoadoutSlotList : public Core::DataContainer {
        Array<CasablancaShared::BFUILoadoutSlotData> Slots; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUILoadoutSlotList) == 0x20);
}
#pragma pack(pop)