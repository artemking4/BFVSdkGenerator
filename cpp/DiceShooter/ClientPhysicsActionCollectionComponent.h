// Object: ClientPhysicsActionCollectionComponent
// ClassId: 5863
// RuntimeId: 2055
// TypeInfo: 0x0000000144DCB860
#include "../GameClient/ClientGameComponent.h"

namespace DiceShooter {
    class ClientPhysicsActionCollectionComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x308];
    }; // 0x340
    static_assert(sizeof(ClientPhysicsActionCollectionComponent) == 0x340);
}