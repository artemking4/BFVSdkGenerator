// Object: BFUILoadoutData
// ClassId: 1219
// RuntimeId: 15628
// TypeInfo: 0x0000000144D49B00
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUILoadoutSlotList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILoadoutData : public Core::DataContainer {
        CasablancaShared::BFUILoadoutSlotList Slots; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUILoadoutData) == 0x20);
}
#pragma pack(pop)