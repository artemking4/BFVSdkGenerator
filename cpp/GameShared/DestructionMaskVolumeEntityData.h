// Object: DestructionMaskVolumeEntityData
// ClassId: 3357
// RuntimeId: 7462
// TypeInfo: 0x0000000144E6D350
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"
#include "../Core/Vec4.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"

#pragma pack(push, 16)
namespace GameShared {
    class DestructionMaskVolumeEntityData : public Entity::SpatialEntityData {
        Core::Vec4 DustAccumulationCurve; // 0x60
        Core::Vec4 ShaderUserMasks; // 0x70
        Float32 Radius; // 0x80
        Float32 DustAccumulationLifeTime; // 0x84
        RenderBase::SurfaceShaderInstanceDataStruct Shader; // 0x88
    }; // 0xB0
    static_assert(sizeof(DestructionMaskVolumeEntityData) == 0xB0);
}
#pragma pack(pop)