// Object: ClientBFSaveDataBaseEntity
// ClassId: 6337
// RuntimeId: 4947
// TypeInfo: 0x0000000144C53090
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSaveDataBaseEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFSaveDataBaseEntity) == 0x40);
}