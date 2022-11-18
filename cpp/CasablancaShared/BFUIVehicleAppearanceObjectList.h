// Object: BFUIVehicleAppearanceObjectList
// ClassId: 5493
// RuntimeId: 46823
// TypeInfo: 0x0000000144D7EF20
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIVehicleAppearanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleAppearanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIVehicleAppearanceObject> Appearances; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehicleAppearanceObjectList) == 0x20);
}
#pragma pack(pop)