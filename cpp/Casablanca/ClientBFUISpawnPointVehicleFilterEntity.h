// Object: ClientBFUISpawnPointVehicleFilterEntity
// ClassId: 6404
// RuntimeId: 46098
// TypeInfo: 0x0000000144CA6BE0
#include "../Casablanca/ClientBFUIFilterEntityBase.h"

namespace Casablanca {
    class ClientBFUISpawnPointVehicleFilterEntity : public Casablanca::ClientBFUIFilterEntityBase {
        char pad_0x38[0x28];
    }; // 0x60
    static_assert(sizeof(ClientBFUISpawnPointVehicleFilterEntity) == 0x60);
}