// Object: ClientSoldierPoseMeshComponent
// ClassId: 5885
// RuntimeId: 3226
// TypeInfo: 0x0000000144F34160
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientSoldierPoseMeshComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x20];
    }; // 0x58
    static_assert(sizeof(ClientSoldierPoseMeshComponent) == 0x58);
}