// Object: EmitterChildEffectEntityData
// ClassId: 3278
// RuntimeId: 36462
// TypeInfo: 0x0000000144E2A5C0
#include "../Entity/ChildEffectEntityData.h"
#include "../Emitter/SpawnProbabilityRandomType.h"
#include "../Core/QualityScalableFloat.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Emitter/LightProbeSampleMethod.h"
#include "../Emitter/LightProbeSampleOffsetMethod.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Emitter {
    class EmitterChildEffectEntityData : public Entity::ChildEffectEntityData {
        Core::Vec3 LightProbeSampleOffset; // 0xA0
        Emitter::SpawnProbabilityRandomType SpawnProbabilityRandomType; // 0xB0
        Core::QualityScalableFloat SpawnProbabilityRangeMin; // 0xB4
        Core::QualityScalableFloat SpawnProbability; // 0xC8
        Uint32 MaxNearbyInstanceCount; // 0xDC
        Float32 NearbyRadius; // 0xE0
        Emitter::LightProbeSampleMethod LightProbeSampleMethod; // 0xE4
        Emitter::LightProbeSampleOffsetMethod LightProbeSampleOffsetMethod; // 0xE8
        char pad_0xEC[0x4];
    }; // 0xF0
    static_assert(sizeof(EmitterChildEffectEntityData) == 0xF0);
}
#pragma pack(pop)