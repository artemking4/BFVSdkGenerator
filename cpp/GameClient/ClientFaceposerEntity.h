// Object: ClientFaceposerEntity
// ClassId: 6699
// RuntimeId: 28843
// TypeInfo: 0x0000000144E3DC90
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientFaceposerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientFaceposerEntity) == 0x30);
}