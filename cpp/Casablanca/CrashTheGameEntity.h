// Object: CrashTheGameEntity
// ClassId: 7098
// RuntimeId: 38951
// TypeInfo: 0x0000000144C4BC10
#include "../Entity/Entity.h"

namespace Casablanca {
    class CrashTheGameEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(CrashTheGameEntity) == 0x60);
}