// Object: KillCounterEntityData
// ClassId: 2821
// RuntimeId: 60872
// TypeInfo: 0x0000000144DF0CD0
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/KillWeight.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class KillCounterEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        Int32 MaxKillCount; // 0x24
        Float32 MaxKillCountModifier; // 0x28
        Float32 EnemyWeight; // 0x2C
        DiceShooterShared::KillWeight NeutralTeamWeight; // 0x30
        DiceShooterShared::KillWeight TeamKillWeight; // 0x3C
        Boolean IgnoreAI; // 0x48
        Boolean Enabled; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(KillCounterEntityData) == 0x50);
}
#pragma pack(pop)