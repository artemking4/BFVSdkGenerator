// Object: EulerTransformSplitterEntity
// ClassId: 7154
// RuntimeId: 28958
// TypeInfo: 0x0000000144ECEBC0
#include "../Entity/Entity.h"

namespace Entity {
    class EulerTransformSplitterEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(EulerTransformSplitterEntity) == 0x50);
}