// Object: BulletTrailVisualizerEntityData
// ClassId: 2443
// RuntimeId: 37688
// TypeInfo: 0x0000000144C4FB60
#include "../Entity/EntityData.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../EffectBase/EffectParameter.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BulletTrailVisualizerEntityData : public Entity::EntityData {
        EffectBase::EffectBlueprint TrailEffect; // 0x20
        EffectBase::EffectParameter TrailEffectDamageParameter; // 0x28
    }; // 0x30
    static_assert(sizeof(BulletTrailVisualizerEntityData) == 0x30);
}
#pragma pack(pop)