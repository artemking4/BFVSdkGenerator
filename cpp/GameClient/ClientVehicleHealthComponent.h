// Object: ClientVehicleHealthComponent
// ClassId: 6070
// RuntimeId: 32861
// TypeInfo: 0x0000000144E44200
#include "../GameplayClientServer/ClientControllableHealthComponent.h"

namespace GameClient {
    class ClientVehicleHealthComponent : public GameplayClientServer::ClientControllableHealthComponent {
        char pad_0x48[0xB0];
    }; // 0xF8
    static_assert(sizeof(ClientVehicleHealthComponent) == 0xF8);
}