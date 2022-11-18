// Object: BFUIVehicleClassObjectList
// ClassId: 5495
// RuntimeId: 25278
// TypeInfo: 0x0000000144D84220
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIVehicleClassObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleClassObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIVehicleClassObject> Classes; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehicleClassObjectList) == 0x20);
}
#pragma pack(pop)