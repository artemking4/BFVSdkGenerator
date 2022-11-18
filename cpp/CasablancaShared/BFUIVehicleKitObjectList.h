// Object: BFUIVehicleKitObjectList
// ClassId: 5497
// RuntimeId: 38048
// TypeInfo: 0x0000000144D841A0
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIVehicleKitObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleKitObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIVehicleKitObject> Kits; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehicleKitObjectList) == 0x20);
}
#pragma pack(pop)