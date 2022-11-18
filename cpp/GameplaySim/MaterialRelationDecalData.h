// Object: MaterialRelationDecalData
// ClassId: 4261
// RuntimeId: 60553
// TypeInfo: 0x0000000144E9FBC0
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../RenderBase/DecalTemplateBaseAsset.h"

#pragma pack(push, 8)
namespace GameplaySim {
    class MaterialRelationDecalData : public Entity::PhysicsMaterialRelationPropertyData {
        RenderBase::DecalTemplateBaseAsset Decal; // 0x20
        RenderBase::DecalTemplateBaseAsset ExitDecal; // 0x28
        RenderBase::DecalTemplateBaseAsset PassThroughImpactDecal; // 0x30
    }; // 0x38
    static_assert(sizeof(MaterialRelationDecalData) == 0x38);
}
#pragma pack(pop)