// Object: RenderVolumeEntityData
// ClassId: 3440
// RuntimeId: 35395
// TypeInfo: 0x0000000144EC30C0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"
#include "../Core/Vec4.h"
#include "../WorldSim/RenderVolumeTransformType.h"

#pragma pack(push, 16)
namespace WorldSim {
    class RenderVolumeEntityData : public Entity::SpatialEntityData {
        Core::Vec4 UserMasks; // 0x60
        RenderBase::SurfaceShaderInstanceDataStruct Shader; // 0x70
        WorldSim::RenderVolumeTransformType TransformType; // 0x98
        Boolean Enabled; // 0x9C
        char pad_0x9D[0x3];
    }; // 0xA0
    static_assert(sizeof(RenderVolumeEntityData) == 0xA0);
}
#pragma pack(pop)