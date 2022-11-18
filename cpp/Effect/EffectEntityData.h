// Object: EffectEntityData
// ClassId: 3363
// RuntimeId: 26540
// TypeInfo: 0x0000000144E22A80
#include "../Entity/SpatialEntityData.h"
#include "../Entity/GameObjectData.h"
#include "../Core/QualityScalableInt.h"
#include "../Core/QualityScalableFloat.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/QualityScalableBool.h"
#include "../EffectBase/EffectSpawnLodAsset.h"

#pragma pack(push, 16)
namespace Effect {
    class EffectEntityData : public Entity::SpatialEntityData {
        Array<Entity::GameObjectData> Components; // 0x60
        Core::QualityScalableInt MaxActiveInstanceCount; // 0x68
        Core::QualityScalableFloat CullDistance; // 0x7C
        Float32 WaterLevelOffset; // 0x90
        Float32 StartDelay; // 0x94
        EffectBase::EffectSpawnLodAsset EffectSpawnLod; // 0x98
        Boolean KillWhenDistanceCulled; // 0xA0
        Boolean KillByWater; // 0xA1
        Boolean StopByWater; // 0xA2
        Boolean ResetInstanceWhenStarted; // 0xA3
        Boolean AttachToSpawnSurface; // 0xA4
        Core::QualityScalableBool Enable; // 0xA5
        Boolean OverrideDrawOrder; // 0xAA
        Boolean AllowScale; // 0xAB
        Boolean UseLowFrequencyUpdate; // 0xAC
        char pad_0xAD[0x3];
    }; // 0xB0
    static_assert(sizeof(EffectEntityData) == 0xB0);
}
#pragma pack(pop)