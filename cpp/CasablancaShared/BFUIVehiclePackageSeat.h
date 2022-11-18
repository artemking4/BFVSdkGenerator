// Object: BFUIVehiclePackageSeat
// ClassId: 1265
// RuntimeId: 39872
// TypeInfo: 0x0000000144D4BF70
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIVehicleWeaponUnlockIdentifier.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehiclePackageSeat : public Core::DataContainer {
        Array<CasablancaShared::BFUIVehicleWeaponUnlockIdentifier> Weapons; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehiclePackageSeat) == 0x20);
}
#pragma pack(pop)