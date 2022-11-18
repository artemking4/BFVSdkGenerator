// Object: MinefieldEntityData
// ClassId: 2888
// RuntimeId: 34855
// TypeInfo: 0x0000000144C82AC0
#include "../Entity/EntityData.h"
#include "../GameShared/ExplosionEntityData.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace Casablanca {
    class MinefieldEntityData : public Entity::EntityData {
        GameShared::ExplosionEntityData Explosion; // 0x20
        EffectBase::EffectBlueprint TriggerEffect; // 0x28
        GameShared::UnlockAssetBase UnlockAsset; // 0x30
    }; // 0x38
    static_assert(sizeof(MinefieldEntityData) == 0x38);
}
#pragma pack(pop)