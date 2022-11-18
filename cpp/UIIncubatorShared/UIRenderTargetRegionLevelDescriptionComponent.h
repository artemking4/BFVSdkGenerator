// Object: UIRenderTargetRegionLevelDescriptionComponent
// ClassId: 4223
// RuntimeId: 55976
// TypeInfo: 0x0000000144F6DD40
#include "../GameShared/LevelDescriptionComponent.h"
#include "../UIIncubatorShared/UIRenderTargetAtlasRects.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class UIRenderTargetRegionLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        Array<UIIncubatorShared::UIRenderTargetAtlasRects> Atlases; // 0x18
    }; // 0x20
    static_assert(sizeof(UIRenderTargetRegionLevelDescriptionComponent) == 0x20);
}
#pragma pack(pop)