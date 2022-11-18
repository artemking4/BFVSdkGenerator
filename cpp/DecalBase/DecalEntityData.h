// Object: DecalEntityData
// ClassId: 3356
// RuntimeId: 6791
// TypeInfo: 0x0000000144DA5740
#include "../Entity/SpatialEntityData.h"
#include "../RenderBase/DecalType.h"
#include "../Global/Uint8.h"
#include "../RenderBase/DecalAtlasTile.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DecalBase {
    class DecalEntityData : public Entity::SpatialEntityData {
        RenderBase::DecalType DecalType; // 0x60
        RenderBase::DecalAtlasTile AtlasTile; // 0x64
        RenderBase::SurfaceShaderInstanceDataStruct Shader; // 0x78
        Float32 ClipAngle; // 0xA0
        Uint8 SortingPriority; // 0xA4
        Boolean Enabled; // 0xA5
        char pad_0xA6[0xA];
    }; // 0xB0
    static_assert(sizeof(DecalEntityData) == 0xB0);
}
#pragma pack(pop)