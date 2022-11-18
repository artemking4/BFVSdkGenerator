// Object: ClientSoldierParachuteComponent
// ClassId: 5884
// RuntimeId: 11618
// TypeInfo: 0x0000000144F31400
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientSoldierParachuteComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x128];
    }; // 0x160
    static_assert(sizeof(ClientSoldierParachuteComponent) == 0x160);
}