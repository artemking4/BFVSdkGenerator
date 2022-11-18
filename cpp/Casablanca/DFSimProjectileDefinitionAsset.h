// Object: DFSimProjectileDefinitionAsset
// ClassId: 333
// RuntimeId: 41424
// TypeInfo: 0x0000000144C1D900
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/Float32.h"
#include "../Entity/ObjectBlueprint.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Casablanca {
    class DFSimProjectileDefinitionAsset : public Core::DataContainerPolicyAsset {
        Float32 Speed; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 DebugColor; // 0x30
        Float32 Damage; // 0x40
        char pad_0x44[0x4];
        Entity::ObjectBlueprint Model; // 0x48
        EffectBase::EffectBlueprint HitEffect; // 0x50
        Float32 DebugScale; // 0x58
        Boolean ShowInWorldDebug; // 0x5C
        Boolean ShowDebugInfo; // 0x5D
        char pad_0x5E[0x2];
    }; // 0x60
    static_assert(sizeof(DFSimProjectileDefinitionAsset) == 0x60);
}
#pragma pack(pop)