// Object: MeshEmitterMaskAsset
// ClassId: 566
// RuntimeId: 40329
// TypeInfo: 0x0000000144E2ABC0
#include "../EffectBase/MeshEmitterMaskBaseAsset.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace Emitter {
    class MeshEmitterMaskAsset : public EffectBase::MeshEmitterMaskBaseAsset {
        ResourceRef MeshEmitterMaskResource; // 0x20
    }; // 0x28
    static_assert(sizeof(MeshEmitterMaskAsset) == 0x28);
}
#pragma pack(pop)