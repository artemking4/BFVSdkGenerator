// Object: ServerVehicleDeployWeapon
// ClassId: 8721
// RuntimeId: 28420
// TypeInfo: 0x0000000144C208A0
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerVehicleDeployWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0xF0];
    }; // 0x560
    static_assert(sizeof(ServerVehicleDeployWeapon) == 0x560);
}