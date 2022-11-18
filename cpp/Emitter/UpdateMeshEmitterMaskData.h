// Object: UpdateMeshEmitterMaskData
// ClassId: 4516
// RuntimeId: 51736
// TypeInfo: 0x0000000144E2AFC0
#include "../Emitter/ProcessorData.h"
#include "../Emitter/MeshEmitterMaskAsset.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateMeshEmitterMaskData : public Emitter::ProcessorData {
        Emitter::MeshEmitterMaskAsset MeshEmitterMask; // 0x38
    }; // 0x40
    static_assert(sizeof(UpdateMeshEmitterMaskData) == 0x40);
}
#pragma pack(pop)