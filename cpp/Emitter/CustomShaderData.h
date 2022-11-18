// Object: CustomShaderData
// ClassId: 4479
// RuntimeId: 54007
// TypeInfo: 0x0000000144E2CB40
#include "../Emitter/ProcessorData.h"
#include "../Global/Boolean.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"
#include "../Global/Float32.h"
#include "../Emitter/EmitterDrawOrder.h"
#include "../Emitter/ParticleSorting.h"

#pragma pack(push, 8)
namespace Emitter {
    class CustomShaderData : public Emitter::ProcessorData {
        RenderBase::SurfaceShaderInstanceDataStruct Shader; // 0x38
        Float32 AnimationFrameCount; // 0x60
        Float32 AnimationFrameColumnCount; // 0x64
        Emitter::EmitterDrawOrder EmitterDrawOrder; // 0x68
        Emitter::ParticleSorting ParticleSorting; // 0x6C
        Boolean Hide; // 0x70
        char pad_0x71[0x7];
    }; // 0x78
    static_assert(sizeof(CustomShaderData) == 0x78);
}
#pragma pack(pop)