// Object: BFGetFactionIdEntity
// ClassId: 6221
// RuntimeId: 54028
// TypeInfo: 0x0000000144C960D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFGetFactionIdEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BFGetFactionIdEntity) == 0x38);
}