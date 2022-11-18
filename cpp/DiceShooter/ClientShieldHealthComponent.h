// Object: ClientShieldHealthComponent
// ClassId: 6073
// RuntimeId: 31994
// TypeInfo: 0x0000000144DCF670
#include "../GameplayClientServer/ClientGameHealthComponent.h"

namespace DiceShooter {
    class ClientShieldHealthComponent : public GameplayClientServer::ClientGameHealthComponent {
        char pad_0x30[0x88];
    }; // 0xB8
    static_assert(sizeof(ClientShieldHealthComponent) == 0xB8);
}