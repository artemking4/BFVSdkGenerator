// Object: ClientWriteAntGameStateEntity
// ClassId: 7060
// RuntimeId: 31827
// TypeInfo: 0x0000000144E3DFC0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientWriteAntGameStateEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(ClientWriteAntGameStateEntity) == 0xC8);
}