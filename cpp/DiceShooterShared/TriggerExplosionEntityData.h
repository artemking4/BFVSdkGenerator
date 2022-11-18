// Object: TriggerExplosionEntityData
// ClassId: 3599
// RuntimeId: 64874
// TypeInfo: 0x0000000144DF93C0
#include "../Entity/EntityData.h"
#include "../Core/Vec3.h"
#include "../Core/LinearTransform.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../Global/Float32.h"
#include "../GameShared/ExplosionEntityData.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class TriggerExplosionEntityData : public Entity::EntityData {
        Float32 DamageMultiplier; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Position; // 0x30
        Core::LinearTransform Transform; // 0x40
        Core::Vec3 ExternalDamageDirection; // 0x80
        DiceShooterShared::QueryEntityResult DamageGiver; // 0x90
        Float32 BlastAngle; // 0xA0
        char pad_0xA4[0x4];
        GameShared::ExplosionEntityData ExplosionData; // 0xA8
        GameShared::UnlockAssetBase Unlock; // 0xB0
        char pad_0xB8[0x8];
    }; // 0xC0
    static_assert(sizeof(TriggerExplosionEntityData) == 0xC0);
}
#pragma pack(pop)