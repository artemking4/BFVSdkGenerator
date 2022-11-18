// Object: UpdateMeshEmitterSourceData
// ClassId: 4517
// RuntimeId: 49719
// TypeInfo: 0x0000000144E2B040
#include "../Emitter/ProcessorData.h"
#include "../Emitter/MeshEmitterAsset.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateMeshEmitterSourceData : public Emitter::ProcessorData {
        Emitter::MeshEmitterAsset MeshEmitter; // 0x38
        Uint32 ParticlesPerPrimitive; // 0x40
        Float32 RandomPosition; // 0x44
        Boolean GeneratePosition; // 0x48
        Boolean GenerateNormal; // 0x49
        Boolean GenerateUVs; // 0x4A
        Boolean SendMeshUvsToShaderGraph; // 0x4B
        Boolean SequentialEmission; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(UpdateMeshEmitterSourceData) == 0x50);
}
#pragma pack(pop)