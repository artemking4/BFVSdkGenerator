// Object: LightEffectEntityData
// ClassId: 3281
// RuntimeId: 25121
// TypeInfo: 0x0000000144E22840
#include "../Entity/ChildEffectEntityData.h"
#include "../WorldSim/LocalLightEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/QualityScalableFloat.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace Effect {
    class LightEffectEntityData : public Entity::ChildEffectEntityData {
        Core::Vec4 IntensityCurve; // 0xA0
        WorldSim::LocalLightEntityData Light; // 0xB0
        Float32 Lifetime; // 0xB8
        Float32 RandomIntensityFreq; // 0xBC
        Core::QualityScalableFloat SpawnProbability; // 0xC0
        Float32 RandomIntensityMin; // 0xD4
        Float32 RandomIntensityMax; // 0xD8
        Float32 IntensityMin; // 0xDC
        Float32 IntensityMax; // 0xE0
        Boolean Looping; // 0xE4
        Boolean LocalPlayerOnly; // 0xE5
        char pad_0xE6[0xA];
    }; // 0xF0
    static_assert(sizeof(LightEffectEntityData) == 0xF0);
}
#pragma pack(pop)