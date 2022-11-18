// Object: UIDynamicStatModifierIntValueKey
// ClassId: 5541
// RuntimeId: 56126
// TypeInfo: 0x0000000144D98590
#include "../CasablancaShared/UIDynamicStatModifierKey.h"
#include "../CasablancaShared/UIStatModifierOperator.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDynamicStatModifierIntValueKey : public CasablancaShared::UIDynamicStatModifierKey {
        CasablancaShared::UIStatModifierOperator Operator; // 0x38
        Float32 Value; // 0x3C
    }; // 0x40
    static_assert(sizeof(UIDynamicStatModifierIntValueKey) == 0x40);
}
#pragma pack(pop)