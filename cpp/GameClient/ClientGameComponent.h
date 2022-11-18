// Object: ClientGameComponent
// ClassId: 5766
// RuntimeId: 49801
// TypeInfo: 0x0000000144E37BF0
#include "../GameCommon/GameComponent.h"

namespace GameClient {
    class ClientGameComponent : public GameCommon::GameComponent {
        char pad_0x30[0x8];
    }; // 0x38
    static_assert(sizeof(ClientGameComponent) == 0x38);
}