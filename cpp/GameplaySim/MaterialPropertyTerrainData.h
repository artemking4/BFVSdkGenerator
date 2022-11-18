// Object: MaterialPropertyTerrainData
// ClassId: 4259
// RuntimeId: 4769
// TypeInfo: 0x0000000144E9F7C0
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../Core/Vec3.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Global/Float32.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameplaySim {
    class MaterialPropertyTerrainData : public Entity::PhysicsMaterialRelationPropertyData {
        EffectBase::EffectBlueprint DestructionEffect; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 DirtTriggerColor; // 0x30
        Float32 DirtTriggerFactor; // 0x40
        Entity::MaterialDecl MaskMaterial; // 0x44
        Float32 SoldierOffsetY; // 0x48
        Float32 SoldierOffsetYProne; // 0x4C
        Boolean RoughSkiing; // 0x50
        char pad_0x51[0xF];
    }; // 0x60
    static_assert(sizeof(MaterialPropertyTerrainData) == 0x60);
}
#pragma pack(pop)