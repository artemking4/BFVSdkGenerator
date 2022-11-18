// Object: MaterialRelationTriggarableEffectData
// ClassId: 4265
// RuntimeId: 9991
// TypeInfo: 0x0000000144DBBE00
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../EffectBase/EffectBlueprint.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class MaterialRelationTriggarableEffectData : public Entity::PhysicsMaterialRelationPropertyData {
        EffectBase::EffectBlueprint Effect; // 0x20
    }; // 0x28
    static_assert(sizeof(MaterialRelationTriggarableEffectData) == 0x28);
}
#pragma pack(pop)