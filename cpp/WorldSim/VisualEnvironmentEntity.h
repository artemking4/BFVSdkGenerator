// Object: VisualEnvironmentEntity
// ClassId: 7980
// RuntimeId: 28179
// TypeInfo: 0x0000000144EC8030
#include "../Entity/ComponentEntity.h"

namespace WorldSim {
    class VisualEnvironmentEntity : public Entity::ComponentEntity {
        char pad_0xE8[0x468];
    }; // 0x550
    static_assert(sizeof(VisualEnvironmentEntity) == 0x550);
}