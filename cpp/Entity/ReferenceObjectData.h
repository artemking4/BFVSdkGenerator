// Object: ReferenceObjectData
// ClassId: 3940
// RuntimeId: 36333
// TypeInfo: 0x0000000144ED7B70
#include "../Entity/GameObjectData.h"
#include "../Core/LinearTransform.h"
#include "../Entity/Blueprint.h"
#include "../Entity/ObjectVariation.h"
#include "../Entity/StreamRealm.h"
#include "../Core/RadiosityTypeOverride.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Core/RenderingOverrides.h"

#pragma pack(push, 16)
namespace Entity {
    class ReferenceObjectData : public Entity::GameObjectData {
        Entity::Blueprint Blueprint; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform BlueprintTransform; // 0x30
        Entity::ObjectVariation ObjectVariation; // 0x70
        Entity::StreamRealm StreamRealm; // 0x78
        Core::RadiosityTypeOverride RadiosityTypeOverride; // 0x7C
        Uint32 LightmapResolutionScale; // 0x80
        Core::RenderingOverrides RenderingOverrides; // 0x84
        Boolean LightmapScaleWithSize; // 0xA8
        Boolean ForceSeparateEnlightenSystem; // 0xA9
        Boolean CastSunShadowEnable; // 0xAA
        Boolean CastReflectionEnable; // 0xAB
        Boolean CastEnvmapEnable; // 0xAC
        Boolean CastRaytracedReflectionEnable; // 0xAD
        Boolean Excluded; // 0xAE
        Boolean CreateIndestructibleEntity; // 0xAF
    }; // 0xB0
    static_assert(sizeof(ReferenceObjectData) == 0xB0);
}
#pragma pack(pop)