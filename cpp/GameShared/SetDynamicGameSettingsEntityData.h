// Object: SetDynamicGameSettingsEntityData
// ClassId: 3198
// RuntimeId: 60489
// TypeInfo: 0x0000000144E90CE0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/DynamicGameSettingBase.h"

#pragma pack(push, 8)
namespace GameShared {
    class SetDynamicGameSettingsEntityData : public Entity::EntityData {
        Array<GameShared::DynamicGameSettingBase> Settings; // 0x20
        Boolean SetOnPropertyChanged; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SetDynamicGameSettingsEntityData) == 0x30);
}
#pragma pack(pop)