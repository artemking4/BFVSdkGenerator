// Object: ClientBFTreadMarkMakerEntity
// ClassId: 6361
// RuntimeId: 6089
// TypeInfo: 0x0000000144C532B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFTreadMarkMakerEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientBFTreadMarkMakerEntity) == 0x78);
}