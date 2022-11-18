// Object: ClientAmbientDataEntity
// ClassId: 6320
// RuntimeId: 45611
// TypeInfo: 0x0000000144BDDB70
#include "../Entity/Entity.h"

namespace Ambience {
    class ClientAmbientDataEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientAmbientDataEntity) == 0x30);
}