// Object: ClientGameHealthComponent
// ClassId: 6062
// RuntimeId: 43762
// TypeInfo: 0x0000000144E9E870
#include "../Physics/HealthComponent.h"

namespace GameplayClientServer {
    class ClientGameHealthComponent : public Physics::HealthComponent {
        char pad_0x28[0x8];
    }; // 0x30
    static_assert(sizeof(ClientGameHealthComponent) == 0x30);
}