// Object: BFUIVehicleClassCompareEntityData
// ClassId: 2317
// RuntimeId: 7522
// TypeInfo: 0x0000000144D80C20
#include "../CasablancaShared/BFUIObjectCompareEntityData.h"
#include "../CasablancaShared/BFUIVehicleClassObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleClassCompareEntityData : public CasablancaShared::BFUIObjectCompareEntityData {
        CasablancaShared::BFUIVehicleClassObject A; // 0x28
        CasablancaShared::BFUIVehicleClassObject B; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIVehicleClassCompareEntityData) == 0x38);
}
#pragma pack(pop)