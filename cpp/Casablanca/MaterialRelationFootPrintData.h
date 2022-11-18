// Object: MaterialRelationFootPrintData
// ClassId: 4263
// RuntimeId: 26630
// TypeInfo: 0x0000000144C1D200
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class MaterialRelationFootPrintData : public Entity::PhysicsMaterialRelationPropertyData {
        EffectBase::EffectBlueprint DecalParticleEffect; // 0x20
        Boolean SnapToWater; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(MaterialRelationFootPrintData) == 0x30);
}
#pragma pack(pop)