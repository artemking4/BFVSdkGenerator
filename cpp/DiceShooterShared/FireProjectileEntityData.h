// Object: FireProjectileEntityData
// ClassId: 2742
// RuntimeId: 44219
// TypeInfo: 0x0000000144DE4CF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/FireProjectileEntityParameters.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class FireProjectileEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform ShootSpace; // 0x30
        Core::LinearTransform VisualShootSpace; // 0x70
        DiceShooterShared::QueryEntityResult DamageGiver; // 0xB0
        DiceShooterShared::QueryEntityResult ExcludedPhysics; // 0xC0
        DiceShooterShared::FireProjectileEntityParameters FireProjectileData; // 0xD0
        Array<DiceShooterShared::FireProjectileEntityParameters> FireProjectileDataList; // 0x100
        Float32 TimeBehind; // 0x108
        Int32 Index; // 0x10C
        Float32 DamageMultiplier; // 0x110
        Float32 ExplosionDamageMultiplier; // 0x114
        Boolean IsRemoteDamage; // 0x118
        char pad_0x119[0x7];
    }; // 0x120
    static_assert(sizeof(FireProjectileEntityData) == 0x120);
}
#pragma pack(pop)