// Object: BFUIVehicleInstanceObject
// ClassId: 4136
// RuntimeId: 39622
// TypeInfo: 0x0000000144D7F0A0
#include "../CasablancaShared/BFUIVehicleKitObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleInstanceObject : public CasablancaShared::BFUIVehicleKitObject {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(BFUIVehicleInstanceObject) == 0x48);
}
#pragma pack(pop)