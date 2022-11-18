// Object: MaterialRelationEffectData
// ClassId: 4262
// RuntimeId: 56333
// TypeInfo: 0x0000000144E9FA40
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../GameplaySim/EffectWithSpeedRange.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Global/Float32.h"
#include "../Entity/ObjectBlueprint.h"
#include "../GameplaySim/WeatheringEvent.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameplaySim {
    class MaterialRelationEffectData : public Entity::PhysicsMaterialRelationPropertyData {
        Array<GameplaySim::EffectWithSpeedRange> ImpactEffects; // 0x20
        EffectBase::EffectBlueprint ScrapeEffect; // 0x28
        Float32 ScrapeLength; // 0x30
        char pad_0x34[0x4];
        Array<GameplaySim::EffectWithSpeedRange> ExitEffects; // 0x38
        Array<GameplaySim::EffectWithSpeedRange> PassThroughImpactEffects; // 0x40
        Array<Entity::ObjectBlueprint> ImpactDebris; // 0x48
        Array<GameplaySim::WeatheringEvent> ImpactWeathering; // 0x50
        Float32 ImpactEffectMaxSpreadAngle; // 0x58
        Boolean MirrorImpactDirection; // 0x5C
        Boolean EnableInheritedVelocity; // 0x5D
        char pad_0x5E[0x2];
    }; // 0x60
    static_assert(sizeof(MaterialRelationEffectData) == 0x60);
}
#pragma pack(pop)