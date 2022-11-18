// Object: BFUIVehicleAppearanceInstanceObject
// ClassId: 4126
// RuntimeId: 8890
// TypeInfo: 0x0000000144D7EEA0
#include "../CasablancaShared/BFUIVehicleAppearanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleAppearanceInstanceObject : public CasablancaShared::BFUIVehicleAppearanceObject {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(BFUIVehicleAppearanceInstanceObject) == 0x48);
}
#pragma pack(pop)