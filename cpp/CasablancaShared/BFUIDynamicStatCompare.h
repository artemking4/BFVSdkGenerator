// Object: BFUIDynamicStatCompare
// ClassId: 1205
// RuntimeId: 23000
// TypeInfo: 0x0000000144D82020
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIDynamicStat.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIDynamicStatCompare : public Core::DataContainer {
        CasablancaShared::BFUIDynamicStat StatA; // 0x18
        CasablancaShared::BFUIDynamicStat StatB; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIDynamicStatCompare) == 0x28);
}
#pragma pack(pop)