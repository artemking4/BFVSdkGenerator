// Object: UpdateVertexAnimData
// ClassId: 4533
// RuntimeId: 33310
// TypeInfo: 0x0000000144E2B0C0
#include "../Emitter/ProcessorData.h"
#include "../Render/VertexShaderFragmentAsset.h"
#include "../Global/Float32.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace Emitter {
    class UpdateVertexAnimData : public Emitter::ProcessorData {
        Render::VertexShaderFragmentAsset ShaderFragment; // 0x38
        Float32 PerParticleRandomness; // 0x40
        char pad_0x44[0xC];
        Core::Vec4 AnimationParameters; // 0x50
        Float32 FrequencyMultiplier; // 0x60
        char pad_0x64[0xC];
    }; // 0x70
    static_assert(sizeof(UpdateVertexAnimData) == 0x70);
}
#pragma pack(pop)