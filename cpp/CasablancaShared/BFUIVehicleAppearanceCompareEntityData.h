// Object: BFUIVehicleAppearanceCompareEntityData
// ClassId: 2315
// RuntimeId: 51573
// TypeInfo: 0x0000000144D80AA0
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIVehicleAppearanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleAppearanceCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIVehicleAppearanceObject A; // 0x28
        CasablancaShared::BFUIVehicleAppearanceObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIVehicleAppearanceCompareEntityData) == 0x38);
}
#pragma pack(pop)