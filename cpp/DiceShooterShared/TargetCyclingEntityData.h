// Object: TargetCyclingEntityData
// ClassId: 3549
// RuntimeId: 10375
// TypeInfo: 0x0000000144DF97C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityResult.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class TargetCyclingEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DiceShooterShared::QueryEntityResult InitialTarget; // 0x28
        DiceShooterShared::QueryEntityResult TargetList; // 0x38
    }; // 0x48
    static_assert(sizeof(TargetCyclingEntityData) == 0x48);
}
#pragma pack(pop)