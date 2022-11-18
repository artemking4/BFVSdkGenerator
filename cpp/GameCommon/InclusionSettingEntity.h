// Object: InclusionSettingEntity
// ClassId: 7198
// RuntimeId: 14011
// TypeInfo: 0x0000000144E4F440
#include "../Entity/Entity.h"

namespace GameCommon {
    class InclusionSettingEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(InclusionSettingEntity) == 0x38);
}