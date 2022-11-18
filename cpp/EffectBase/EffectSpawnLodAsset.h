// Object: EffectSpawnLodAsset
// ClassId: 478
// RuntimeId: 20499
// TypeInfo: 0x0000000144E23520
#include "../Core/Asset.h"
#include "../Core/QualityScalableInt.h"

#pragma pack(push, 8)
namespace EffectBase {
    class EffectSpawnLodAsset : public Core::Asset {
        Core::QualityScalableInt MaxTotalActiveInstanceCount; // 0x20
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(EffectSpawnLodAsset) == 0x38);
}
#pragma pack(pop)