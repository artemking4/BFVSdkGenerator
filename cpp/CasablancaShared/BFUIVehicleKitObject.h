// Object: BFUIVehicleKitObject
// ClassId: 4134
// RuntimeId: 48895
// TypeInfo: 0x0000000144D7F120
#include "../CasablancaShared/BFUIVehicleClassObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleKitObject : public CasablancaShared::BFUIVehicleClassObject {
        char pad_0x28[0x10];
    }; // 0x38
    static_assert(sizeof(BFUIVehicleKitObject) == 0x38);
}
#pragma pack(pop)