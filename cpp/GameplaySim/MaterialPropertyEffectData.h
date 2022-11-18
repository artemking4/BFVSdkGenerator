// Object: MaterialPropertyEffectData
// ClassId: 4255
// RuntimeId: 49253
// TypeInfo: 0x0000000144E9FC40
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../GameplaySim/EffectWithSpeedRange.h"

#pragma pack(push, 8)
namespace GameplaySim {
    class MaterialPropertyEffectData : public Entity::PhysicsMaterialRelationPropertyData {
        Array<GameplaySim::EffectWithSpeedRange> ImpactEffects; // 0x20
    }; // 0x28
    static_assert(sizeof(MaterialPropertyEffectData) == 0x28);
}
#pragma pack(pop)