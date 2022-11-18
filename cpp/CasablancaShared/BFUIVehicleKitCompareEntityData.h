// Object: BFUIVehicleKitCompareEntityData
// ClassId: 2319
// RuntimeId: 49515
// TypeInfo: 0x0000000144D80BA0
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIVehicleKitObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleKitCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIVehicleKitObject A; // 0x28
        CasablancaShared::BFUIVehicleKitObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIVehicleKitCompareEntityData) == 0x38);
}
#pragma pack(pop)