// Object: BFUIVehicleFilterEntityData
// ClassId: 2197
// RuntimeId: 1511
// TypeInfo: 0x0000000144D81620
#include "../CasablancaShared/BFUIClassFilterEntityBaseData.h"
#include "../CasablancaShared/BFUIVehicleClassObject.h"
#include "../CasablancaShared/BFUIVehicleInstanceObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleFilterEntityData : public CasablancaShared::BFUIClassFilterEntityBaseData {
        CasablancaShared::BFUIVehicleClassObject IncludeVehicleClass; // 0x30
        CasablancaShared::BFUIVehicleClassObject ExcludeVehicleClass; // 0x38
        CasablancaShared::BFUIVehicleInstanceObjectList In; // 0x40
    }; // 0x48
    static_assert(sizeof(BFUIVehicleFilterEntityData) == 0x48);
}
#pragma pack(pop)