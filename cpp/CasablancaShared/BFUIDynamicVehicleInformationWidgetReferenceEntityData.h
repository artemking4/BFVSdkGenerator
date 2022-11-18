// Object: BFUIDynamicVehicleInformationWidgetReferenceEntityData
// ClassId: 3969
// RuntimeId: 21764
// TypeInfo: 0x0000000144D41350
#include "../DiceCommonsShared/WidgetReferenceEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIDynamicVehicleInformationWidgetReferenceEntityData : public DiceCommonsShared::WidgetReferenceEntityData {
        Boolean Enabled; // 0xC0
        char pad_0xC1[0xF];
    }; // 0xD0
    static_assert(sizeof(BFUIDynamicVehicleInformationWidgetReferenceEntityData) == 0xD0);
}
#pragma pack(pop)