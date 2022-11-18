// Object: ClientBFUIVehicleFilterEntity
// ClassId: 6398
// RuntimeId: 60471
// TypeInfo: 0x0000000144CA6CF0
#include "../Casablanca/ClientBFUIClassFilterEntityBase.h"

namespace Casablanca {
    class ClientBFUIVehicleFilterEntity : public Casablanca::ClientBFUIClassFilterEntityBase {
        char pad_0x40[0x50];
    }; // 0x90
    static_assert(sizeof(ClientBFUIVehicleFilterEntity) == 0x90);
}