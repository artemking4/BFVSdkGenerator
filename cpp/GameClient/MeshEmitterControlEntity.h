// Object: MeshEmitterControlEntity
// ClassId: 7261
// RuntimeId: 48123
// TypeInfo: 0x0000000144E3E510
#include "../Entity/Entity.h"

namespace GameClient {
    class MeshEmitterControlEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(MeshEmitterControlEntity) == 0x68);
}