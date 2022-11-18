// Object: BFUIVehicleRestrictionInfo
// ClassId: 1267
// RuntimeId: 31849
// TypeInfo: 0x0000000144D4C0F0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleRestrictionInfo : public Core::DataContainer {
        CString ItemName; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehicleRestrictionInfo) == 0x20);
}
#pragma pack(pop)