// Object: MeshAssemblerEntity
// ClassId: 7260
// RuntimeId: 988
// TypeInfo: 0x0000000144DB0190
#include "../Entity/Entity.h"

namespace DiceCommons {
    class MeshAssemblerEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(MeshAssemblerEntity) == 0x50);
}