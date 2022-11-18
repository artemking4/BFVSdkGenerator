// Object: BFUIVehicleAppearanceObject
// ClassId: 4125
// RuntimeId: 6444
// TypeInfo: 0x0000000144D7EFA0
#include "../CasablancaShared/BFUIUnlockObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleAppearanceObject : public CasablancaShared::BFUIUnlockObject {
        char pad_0x28[0x10];
    }; // 0x38
    static_assert(sizeof(BFUIVehicleAppearanceObject) == 0x38);
}
#pragma pack(pop)