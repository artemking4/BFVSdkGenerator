// Object: ClientBFUIUnlockAssetEntity
// ClassId: 6597
// RuntimeId: 5869
// TypeInfo: 0x0000000144C58E20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIUnlockAssetEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIUnlockAssetEntity) == 0x40);
}