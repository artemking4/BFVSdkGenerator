// Object: DamageModifierExtended
// ClassId: 1503
// RuntimeId: 59005
// TypeInfo: 0x0000000144C06360
#include "../Core/DataContainer.h"
#include "../BattleAIShared/PiecewiseLinearCurve.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class DamageModifierExtended : public Core::DataContainer {
        BattleAIShared::PiecewiseLinearCurve Damage; // 0x18
    }; // 0x28
    static_assert(sizeof(DamageModifierExtended) == 0x28);
}
#pragma pack(pop)