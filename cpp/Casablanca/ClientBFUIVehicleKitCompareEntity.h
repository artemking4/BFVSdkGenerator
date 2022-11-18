// Object: ClientBFUIVehicleKitCompareEntity
// ClassId: 6508
// RuntimeId: 27176
// TypeInfo: 0x0000000144CA78A0
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIVehicleKitCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIVehicleKitCompareEntity) == 0x68);
}