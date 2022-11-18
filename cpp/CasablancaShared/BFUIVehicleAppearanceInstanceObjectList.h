// Object: BFUIVehicleAppearanceInstanceObjectList
// ClassId: 5492
// RuntimeId: 20620
// TypeInfo: 0x0000000144D84120
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIVehicleAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleAppearanceInstanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIVehicleAppearanceInstanceObject> Appearances; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehicleAppearanceInstanceObjectList) == 0x20);
}
#pragma pack(pop)