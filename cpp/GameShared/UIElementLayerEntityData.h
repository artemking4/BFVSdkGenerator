// Object: UIElementLayerEntityData
// ClassId: 3699
// RuntimeId: 36764
// TypeInfo: 0x0000000144E95AB0
#include "../Entity/EntityData.h"
#include "../Entity/GameObjectData.h"
#include "../GameShared/UIElementInclusionSettings.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class UIElementLayerEntityData : public Entity::EntityData {
        Array<Entity::GameObjectData> Elements; // 0x20
        GameShared::UIElementInclusionSettings InclusionSettings; // 0x28
        Boolean Visible; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(UIElementLayerEntityData) == 0x40);
}
#pragma pack(pop)