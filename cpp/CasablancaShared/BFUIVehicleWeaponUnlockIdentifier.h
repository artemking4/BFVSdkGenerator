// Object: BFUIVehicleWeaponUnlockIdentifier
// ClassId: 1270
// RuntimeId: 42857
// TypeInfo: 0x0000000144D4BFF0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleWeaponUnlockIdentifier : public Core::DataContainer {
        Uint32 VehicleWeaponUnlockIdentifier; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(BFUIVehicleWeaponUnlockIdentifier) == 0x20);
}
#pragma pack(pop)