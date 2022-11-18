// Object: GetDynamicGameSettingsEntity
// ClassId: 7189
// RuntimeId: 38819
// TypeInfo: 0x0000000144E4D8B0
#include "../Entity/Entity.h"

namespace GameCommon {
    class GetDynamicGameSettingsEntity : public Entity::Entity {
        char pad_0x20[0x1E8];
    }; // 0x208
    static_assert(sizeof(GetDynamicGameSettingsEntity) == 0x208);
}