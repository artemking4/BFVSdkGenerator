// Object: ClientSoldierPhysicsComponent
// ClassId: 6105
// RuntimeId: 1208
// TypeInfo: 0x0000000144F360E0
#include "../GameClient/ClientCharacterMasterPhysicsComponent.h"

namespace Soldier {
    class ClientSoldierPhysicsComponent : public GameClient::ClientCharacterMasterPhysicsComponent {
        char pad_0xC0[0x30];
    }; // 0xF0
    static_assert(sizeof(ClientSoldierPhysicsComponent) == 0xF0);
}