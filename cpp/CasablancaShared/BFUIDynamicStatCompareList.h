// Object: BFUIDynamicStatCompareList
// ClassId: 1206
// RuntimeId: 64050
// TypeInfo: 0x0000000144D81FA0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIDynamicStatCompare.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIDynamicStatCompareList : public Core::DataContainer {
        Array<CasablancaShared::BFUIDynamicStatCompare> CompareStats; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIDynamicStatCompareList) == 0x20);
}
#pragma pack(pop)