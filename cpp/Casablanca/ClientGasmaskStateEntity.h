// Object: ClientGasmaskStateEntity
// ClassId: 6719
// RuntimeId: 51467
// TypeInfo: 0x0000000144C56DD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientGasmaskStateEntity : public Entity::Entity {
        char pad_0x20[0xD8];
    }; // 0xF8
    static_assert(sizeof(ClientGasmaskStateEntity) == 0xF8);
}