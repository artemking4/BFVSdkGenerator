// Object: ClientGameComponentEntity
// ClassId: 7889
// RuntimeId: 65370
// TypeInfo: 0x0000000144E37C70
#include "../GameCommon/GameComponentEntity.h"

namespace GameClient {
    class ClientGameComponentEntity : public GameCommon::GameComponentEntity {
        char pad_0x178[0x10];
    }; // 0x188
    static_assert(sizeof(ClientGameComponentEntity) == 0x188);
}