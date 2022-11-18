// Object: BFClientPlayerEntity
// ClassId: 7890
// RuntimeId: 9601
// TypeInfo: 0x0000000144C8A820
#include "../GameClient/ClientGameComponentEntity.h"

namespace Casablanca {
    class BFClientPlayerEntity : public GameClient::ClientGameComponentEntity {
        char pad_0x188[0xD8];
    }; // 0x260
    static_assert(sizeof(BFClientPlayerEntity) == 0x260);
}