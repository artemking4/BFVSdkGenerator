// Object: LifeCounterEntityData
// ClassId: 2834
// RuntimeId: 32536
// TypeInfo: 0x0000000144C33BF0
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class LifeCounterEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        char pad_0x24[0x4];
        Array<Int32> LifeTresholdValues; // 0x28
        Int32 UiShowCountLowerThreshold; // 0x30
        Int32 UiShowCountUpperThreshold; // 0x34
        Int32 StartingLifeCount; // 0x38
        Int32 BaseCount; // 0x3C
        Int32 ReinforceThreshold; // 0x40
        char pad_0x44[0x4];
        Array<Float32> ReinforceTable; // 0x48
        Float32 DefensiveKillRadius; // 0x50
        Float32 FallbackTime; // 0x54
        CString FightHarderMessageSid; // 0x58
        Float32 FightHarderTreshold; // 0x60
        char pad_0x64[0x4];
        CString ReinforceMessageSid; // 0x68
        Float32 DisplayTime; // 0x70
        Boolean Attacker; // 0x74
        Boolean SimpleReinforce; // 0x75
        Boolean SetBestSquadSpawner; // 0x76
        Boolean Enabled; // 0x77
    }; // 0x78
    static_assert(sizeof(LifeCounterEntityData) == 0x78);
}
#pragma pack(pop)