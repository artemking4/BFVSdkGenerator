// Object: ClientShaderParameterEntity
// ClassId: 6852
// RuntimeId: 59328
// TypeInfo: 0x0000000144E41690
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientShaderParameterEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientShaderParameterEntity) == 0x98);
}