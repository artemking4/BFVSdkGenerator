// Object: ClientBFUIVehicleWeaponCompareEntity
// ClassId: 6509
// RuntimeId: 16815
// TypeInfo: 0x0000000144CA7460
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIVehicleWeaponCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIVehicleWeaponCompareEntity) == 0x68);
}