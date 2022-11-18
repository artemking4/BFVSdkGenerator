// Object: ServerSoldierLeaningComponent
// ClassId: 6034
// RuntimeId: 15769
// TypeInfo: 0x0000000144C37A20
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerSoldierLeaningComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x88];
    }; // 0xC0
    static_assert(sizeof(ServerSoldierLeaningComponent) == 0xC0);
}