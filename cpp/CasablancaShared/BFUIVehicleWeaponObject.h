// Object: BFUIVehicleWeaponObject
// ClassId: 4127
// RuntimeId: 54879
// TypeInfo: 0x0000000144D7EDA0
#include "../CasablancaShared/BFUIUnlockObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleWeaponObject : public CasablancaShared::BFUIUnlockObject {
        char pad_0x28[0x10];
    }; // 0x38
    static_assert(sizeof(BFUIVehicleWeaponObject) == 0x38);
}
#pragma pack(pop)