// Object: AutoPlayerAttackObjectiveEntityData
// ClassId: 2080
// RuntimeId: 12408
// TypeInfo: 0x0000000144BEC790
#include "../AutoPlayers/AutoPlayerObjectiveEntityData.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace AutoPlayers {
    class AutoPlayerAttackObjectiveEntityData : public AutoPlayers::AutoPlayerObjectiveEntityData {
        DiceShooterShared::QueryEntityResult Targets; // 0x80
        Int32 Weapon; // 0x90
        Boolean UseRandomPathSpread; // 0x94
        char pad_0x95[0xB];
    }; // 0xA0
    static_assert(sizeof(AutoPlayerAttackObjectiveEntityData) == 0xA0);
}
#pragma pack(pop)