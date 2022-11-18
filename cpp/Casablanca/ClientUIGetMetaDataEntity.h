// Object: ClientUIGetMetaDataEntity
// ClassId: 6949
// RuntimeId: 42783
// TypeInfo: 0x0000000144C9AEC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIGetMetaDataEntity : public Entity::Entity {
        char pad_0x20[0xC8];
    }; // 0xE8
    static_assert(sizeof(ClientUIGetMetaDataEntity) == 0xE8);
}