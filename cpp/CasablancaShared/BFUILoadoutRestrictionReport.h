// Object: BFUILoadoutRestrictionReport
// ClassId: 1222
// RuntimeId: 23579
// TypeInfo: 0x0000000144D4C170
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUILoadoutRestrictionInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILoadoutRestrictionReport : public Core::DataContainer {
        Array<CasablancaShared::BFUILoadoutRestrictionInfo> RestrictionReport; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUILoadoutRestrictionReport) == 0x20);
}
#pragma pack(pop)