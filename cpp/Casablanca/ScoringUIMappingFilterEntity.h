// Object: ScoringUIMappingFilterEntity
// ClassId: 7370
// RuntimeId: 54248
// TypeInfo: 0x0000000144C5D070
#include "../Entity/Entity.h"

namespace Casablanca {
    class ScoringUIMappingFilterEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ScoringUIMappingFilterEntity) == 0x38);
}