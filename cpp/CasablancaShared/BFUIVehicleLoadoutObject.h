// Object: BFUIVehicleLoadoutObject
// ClassId: 4137
// RuntimeId: 27294
// TypeInfo: 0x0000000144D7ED20
#include "../CasablancaShared/BFUIVehicleKitObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleLoadoutObject : public CasablancaShared::BFUIVehicleKitObject {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(BFUIVehicleLoadoutObject) == 0x90);
}
#pragma pack(pop)