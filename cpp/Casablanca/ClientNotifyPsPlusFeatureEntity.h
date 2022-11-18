// Object: ClientNotifyPsPlusFeatureEntity
// ClassId: 6761
// RuntimeId: 62641
// TypeInfo: 0x0000000144CD54F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientNotifyPsPlusFeatureEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientNotifyPsPlusFeatureEntity) == 0x30);
}