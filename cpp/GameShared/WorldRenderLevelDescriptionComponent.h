// Object: WorldRenderLevelDescriptionComponent
// ClassId: 4227
// RuntimeId: 42647
// TypeInfo: 0x0000000144E78340
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Core/PlatformScalableInt.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class WorldRenderLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        Core::PlatformScalableInt ShadowmapSliceCountOffset; // 0x18
        Core::PlatformScalableInt ShadowmapSliceCountMin; // 0x3C
        Core::PlatformScalableInt ShadowmapSliceCountMax; // 0x60
        Core::PlatformScalableInt ShadowmapResolution; // 0x84
        Boolean ForceSpriteDoF; // 0xA8
        char pad_0xA9[0x7];
    }; // 0xB0
    static_assert(sizeof(WorldRenderLevelDescriptionComponent) == 0xB0);
}
#pragma pack(pop)