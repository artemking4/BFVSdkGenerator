// Object: MaterialRelationVehicleData
// ClassId: 4266
// RuntimeId: 25555
// TypeInfo: 0x0000000144E9F840
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../EffectBase/EffectBlueprint.h"

#pragma pack(push, 8)
namespace GameplaySim {
    class MaterialRelationVehicleData : public Entity::PhysicsMaterialRelationPropertyData {
        EffectBase::EffectBlueprint ChassiEffect; // 0x20
        EffectBase::EffectBlueprint TrackEffect; // 0x28
        EffectBase::EffectBlueprint WheelEffect; // 0x30
        EffectBase::EffectBlueprint GroundEffect; // 0x38
    }; // 0x40
    static_assert(sizeof(MaterialRelationVehicleData) == 0x40);
}
#pragma pack(pop)