// Object: ClientTerrainShaderParameterEntity
// ClassId: 6900
// RuntimeId: 44669
// TypeInfo: 0x0000000144E40140
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientTerrainShaderParameterEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientTerrainShaderParameterEntity) == 0x80);
}