// Object: ResolveQueryToSoldierEntityData
// ClassId: 3113
// RuntimeId: 29520
// TypeInfo: 0x0000000144DCA9A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityResult.h"

#pragma pack(push, 8)
namespace DiceShooter {
    class ResolveQueryToSoldierEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DiceShooterShared::QueryEntityResult Input; // 0x28
    }; // 0x38
    static_assert(sizeof(ResolveQueryToSoldierEntityData) == 0x38);
}
#pragma pack(pop)