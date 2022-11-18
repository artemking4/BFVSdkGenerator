// Object: MeshEmitterAsset
// ClassId: 564
// RuntimeId: 12141
// TypeInfo: 0x0000000144E2AC40
#include "../EffectBase/MeshEmitterBaseAsset.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace Emitter {
    class MeshEmitterAsset : public EffectBase::MeshEmitterBaseAsset {
        ResourceRef MeshEmitterResource; // 0x20
    }; // 0x28
    static_assert(sizeof(MeshEmitterAsset) == 0x28);
}
#pragma pack(pop)