// Object: ClientAimRotationBoneComponent
// ClassId: 5782
// RuntimeId: 39545
// TypeInfo: 0x0000000144DCBD60
#include "../GameClient/ClientGameComponent.h"

namespace DiceShooter {
    class ClientAimRotationBoneComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x90];
    }; // 0xC8
    static_assert(sizeof(ClientAimRotationBoneComponent) == 0xC8);
}