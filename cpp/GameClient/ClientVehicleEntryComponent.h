// Object: ClientVehicleEntryComponent
// ClassId: 5828
// RuntimeId: 15872
// TypeInfo: 0x0000000144E43F80
#include "../GameClient/ClientPlayerEntryComponent.h"

namespace GameClient {
    class ClientVehicleEntryComponent : public GameClient::ClientPlayerEntryComponent {
        char pad_0x790[0x640];
    }; // 0xDD0
    static_assert(sizeof(ClientVehicleEntryComponent) == 0xDD0);
}