// Object: AIWeaponOverrideEntityData
// ClassId: 2011
// RuntimeId: 10344
// TypeInfo: 0x0000000144C12E80
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../GameShared/GameAIWeaponData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIWeaponOverrideEntityData : public BattleAIShared::AIParameterEntityData {
        GameShared::GameAIWeaponData WeaponData; // 0x28
    }; // 0x30
    static_assert(sizeof(AIWeaponOverrideEntityData) == 0x30);
}
#pragma pack(pop)