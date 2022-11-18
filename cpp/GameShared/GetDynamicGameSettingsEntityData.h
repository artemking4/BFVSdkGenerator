// Object: GetDynamicGameSettingsEntityData
// ClassId: 2786
// RuntimeId: 47444
// TypeInfo: 0x0000000144E6CDD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/DynamicPrimitiveGameSettingBase.h"

#pragma pack(push, 8)
namespace GameShared {
    class GetDynamicGameSettingsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<GameShared::DynamicPrimitiveGameSettingBase> Settings; // 0x28
    }; // 0x30
    static_assert(sizeof(GetDynamicGameSettingsEntityData) == 0x30);
}
#pragma pack(pop)