// Object: ServerGameHealthComponent
// ClassId: 6077
// RuntimeId: 31322
// TypeInfo: 0x0000000144E65360
#include "../Physics/HealthComponent.h"

namespace GameServer {
    class ServerGameHealthComponent : public Physics::HealthComponent {
        char pad_0x28[0x8];
    }; // 0x30
    static_assert(sizeof(ServerGameHealthComponent) == 0x30);
}