// Object: DamageModifier
// ClassId: 1495
// RuntimeId: 50300
// TypeInfo: 0x0000000144C072E0
#include "../Core/DataContainer.h"
#include "../BattleAIShared/TinyPiecewiseLinearCurve.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class DamageModifier : public Core::DataContainer {
        BattleAIShared::TinyPiecewiseLinearCurve Damage; // 0x18
    }; // 0x28
    static_assert(sizeof(DamageModifier) == 0x28);
}
#pragma pack(pop)