// Object: ClientBFUIVehicleInstanceCompareEntity
// ClassId: 6507
// RuntimeId: 33863
// TypeInfo: 0x0000000144CA7790
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIVehicleInstanceCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIVehicleInstanceCompareEntity) == 0x68);
}