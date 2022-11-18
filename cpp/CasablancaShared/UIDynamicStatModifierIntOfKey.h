// Object: UIDynamicStatModifierIntOfKey
// ClassId: 5540
// RuntimeId: 4530
// TypeInfo: 0x0000000144D98510
#include "../CasablancaShared/UIDynamicStatModifierKey.h"
#include "../CasablancaShared/UIStatModifierOperator.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDynamicStatModifierIntOfKey : public CasablancaShared::UIDynamicStatModifierKey {
        CasablancaShared::UIStatModifierOperator Operator; // 0x38
        Float32 Value; // 0x3C
        Float32 Of; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(UIDynamicStatModifierIntOfKey) == 0x48);
}
#pragma pack(pop)