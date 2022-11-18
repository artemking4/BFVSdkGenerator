// Object: ClientShaderQualityEntity
// ClassId: 6853
// RuntimeId: 21788
// TypeInfo: 0x0000000144E3C200
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientShaderQualityEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientShaderQualityEntity) == 0x60);
}