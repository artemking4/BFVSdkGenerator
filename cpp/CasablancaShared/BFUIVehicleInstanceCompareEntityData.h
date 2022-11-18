// Object: BFUIVehicleInstanceCompareEntityData
// ClassId: 2318
// RuntimeId: 16463
// TypeInfo: 0x0000000144D80B20
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleInstanceCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIVehicleInstanceObject A; // 0x28
        CasablancaShared::BFUIVehicleInstanceObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIVehicleInstanceCompareEntityData) == 0x38);
}
#pragma pack(pop)