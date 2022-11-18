// Object: BFUIVehicleAppearanceInstanceCompareEntityData
// ClassId: 2316
// RuntimeId: 9090
// TypeInfo: 0x0000000144D80A20
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIVehicleAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleAppearanceInstanceCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIVehicleAppearanceInstanceObject A; // 0x28
        CasablancaShared::BFUIVehicleAppearanceInstanceObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIVehicleAppearanceInstanceCompareEntityData) == 0x38);
}
#pragma pack(pop)