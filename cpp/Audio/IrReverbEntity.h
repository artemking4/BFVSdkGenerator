// Object: IrReverbEntity
// ClassId: 7207
// RuntimeId: 57716
// TypeInfo: 0x0000000144E20C80
#include "../Entity/Entity.h"

namespace Audio {
    class IrReverbEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(IrReverbEntity) == 0x38);
}