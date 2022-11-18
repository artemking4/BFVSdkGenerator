// Object: UIWidgetEntityData
// ClassId: 3789
// RuntimeId: 47946
// TypeInfo: 0x0000000144E95A30
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../GameShared/UIElementLayerEntityData.h"
#include "../GameShared/UITextureMappingAsset.h"
#include "../Entity/GameObjectData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class UIWidgetEntityData : public Entity::EntityData {
        Float32 Width; // 0x20
        Float32 Height; // 0x24
        Array<GameShared::UIElementLayerEntityData> Layers; // 0x28
        Array<GameShared::UITextureMappingAsset> TextureMappings; // 0x30
        Array<Entity::GameObjectData> Components; // 0x38
        Boolean Visible; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(UIWidgetEntityData) == 0x48);
}
#pragma pack(pop)