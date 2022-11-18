// Object: ClientVehicleDeployWeapon
// ClassId: 8680
// RuntimeId: 7988
// TypeInfo: 0x0000000144C1E4C0
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientVehicleDeployWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0xC0];
    }; // 0xF60
    static_assert(sizeof(ClientVehicleDeployWeapon) == 0xF60);
}