// Object: ClientVehicleEntryListenerComponent
// ClassId: 5908
// RuntimeId: 64048
// TypeInfo: 0x0000000144E393B0
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientVehicleEntryListenerComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x518];
    }; // 0x550
    static_assert(sizeof(ClientVehicleEntryListenerComponent) == 0x550);
}