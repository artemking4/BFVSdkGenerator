// Object: BFUIElementScrollbarEntityData
// ClassId: 3664
// RuntimeId: 58607
// TypeInfo: 0x0000000144D9C890
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementScrollbarEntityData : public CasablancaShared::BFUIElementEntityData {
        Float32 ResetGrabDistance; // 0x130
        Float32 MinSliderSize; // 0x134
        Float32 MaxSliderSize; // 0x138
        Float32 MaxScrollUnitsCount; // 0x13C
        Float32 MinScrollUnitsCount; // 0x140
        Float32 ScrollItemsDisplayedCount; // 0x144
        Float32 Value; // 0x148
        Float32 SmallJumpValue; // 0x14C
        Float32 LargeJumpValue; // 0x150
        Float32 ScrollbarClickJumpValue; // 0x154
        Boolean Vertical; // 0x158
        Boolean Inverted; // 0x159
        Boolean IntegerValues; // 0x15A
        Boolean TakeMouseInput; // 0x15B
        Boolean ConsumeInput; // 0x15C
        char pad_0x15D[0x3];
    }; // 0x160
    static_assert(sizeof(BFUIElementScrollbarEntityData) == 0x160);
}
#pragma pack(pop)