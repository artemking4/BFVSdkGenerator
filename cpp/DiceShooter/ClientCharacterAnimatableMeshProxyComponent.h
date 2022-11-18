// Object: ClientCharacterAnimatableMeshProxyComponent
// ClassId: 5853
// RuntimeId: 27092
// TypeInfo: 0x0000000144DCF370
#include "../GameClient/ClientFakePhysicsMeshComponent.h"

namespace DiceShooter {
    class ClientCharacterAnimatableMeshProxyComponent : public GameClient::ClientFakePhysicsMeshComponent {
        char pad_0xC8[0x18];
    }; // 0xE0
    static_assert(sizeof(ClientCharacterAnimatableMeshProxyComponent) == 0xE0);
}