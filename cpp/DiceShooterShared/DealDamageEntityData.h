// Object: DealDamageEntityData
// ClassId: 2604
// RuntimeId: 7658
// TypeInfo: 0x0000000144DE4DF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/DealDamageEntityParameters.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class DealDamageEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 DamageOrigin; // 0x30
        DiceShooterShared::QueryEntityResult DamageGiver; // 0x40
        DiceShooterShared::QueryEntityResult EntitiesToDamage; // 0x50
        DiceShooterShared::DealDamageEntityParameters DealDamageData; // 0x60
        Array<DiceShooterShared::DealDamageEntityParameters> DealDamageDataList; // 0x80
        Int32 DealDamageDataIndex; // 0x88
        char pad_0x8C[0x4];
    }; // 0x90
    static_assert(sizeof(DealDamageEntityData) == 0x90);
}
#pragma pack(pop)