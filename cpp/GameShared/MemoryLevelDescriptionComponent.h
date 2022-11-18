// Object: MemoryLevelDescriptionComponent
// ClassId: 4216
// RuntimeId: 27300
// TypeInfo: 0x0000000144E783C0
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Core/PlatformScalableInt.h"

#pragma pack(push, 8)
namespace GameShared {
    class MemoryLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        Core::PlatformScalableInt TextureStreamingPoolSize; // 0x18
        Core::PlatformScalableInt MeshStreamingPoolSize; // 0x3C
        Core::PlatformScalableInt EmitterBaseAtlasWidth; // 0x60
        Core::PlatformScalableInt EmitterBaseAtlasHeight; // 0x84
        Core::PlatformScalableInt EmitterBaseAtlasMipmapCount; // 0xA8
        Core::PlatformScalableInt EmitterNormalAtlasWidth; // 0xCC
        Core::PlatformScalableInt EmitterNormalAtlasHeight; // 0xF0
        Core::PlatformScalableInt EmitterNormalAtlasMipmapCount; // 0x114
    }; // 0x138
    static_assert(sizeof(MemoryLevelDescriptionComponent) == 0x138);
}
#pragma pack(pop)