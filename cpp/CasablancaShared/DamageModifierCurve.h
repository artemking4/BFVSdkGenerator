// Object: DamageModifierCurve
// ClassId: 1502
// RuntimeId: 23314
// TypeInfo: 0x0000000144D6CCB0
#include "../Core/DataContainer.h"
#include "../Core/FloatCurve.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DamageModifierCurve : public Core::DataContainer {
        Core::FloatCurve Curve; // 0x18
    }; // 0x20
    static_assert(sizeof(DamageModifierCurve) == 0x20);
}
#pragma pack(pop)