// Object: MorphComponent
// ClassId: 5921
// RuntimeId: 24629
// TypeInfo: 0x0000000144E3B550
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class MorphComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x40];
    }; // 0x78
    static_assert(sizeof(MorphComponent) == 0x78);
}