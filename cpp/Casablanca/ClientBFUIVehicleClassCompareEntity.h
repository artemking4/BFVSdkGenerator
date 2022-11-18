// Object: ClientBFUIVehicleClassCompareEntity
// ClassId: 6506
// RuntimeId: 31606
// TypeInfo: 0x0000000144CA79B0
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIVehicleClassCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIVehicleClassCompareEntity) == 0x68);
}