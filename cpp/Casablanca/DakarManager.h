// Object: DakarManager
// ClassId: 7103
// RuntimeId: 1051
// TypeInfo: 0x0000000144C1EDC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class DakarManager : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(DakarManager) == 0x68);
}