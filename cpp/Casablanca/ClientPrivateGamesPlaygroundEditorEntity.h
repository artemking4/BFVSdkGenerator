// Object: ClientPrivateGamesPlaygroundEditorEntity
// ClassId: 6821
// RuntimeId: 30313
// TypeInfo: 0x0000000144C94C70
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPrivateGamesPlaygroundEditorEntity : public Entity::Entity {
        char pad_0x20[0xF0];
    }; // 0x110
    static_assert(sizeof(ClientPrivateGamesPlaygroundEditorEntity) == 0x110);
}