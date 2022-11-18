// Object: BFUIWorldIconsElementData
// ClassId: 3682
// RuntimeId: 64834
// TypeInfo: 0x0000000144D40E50
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/UIWorldIconCategory.h"
#include "../CasablancaShared/UIIconState.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIWorldIconsElementData : public CasablancaShared::BFUIElementEntityData {
        Array<CasablancaShared::UIWorldIconCategory> IconCategories; // 0x130
        Array<CasablancaShared::UIIconState> IconStates; // 0x138
        Float32 IconsScale; // 0x140
        Float32 TextAlpha; // 0x144
        char pad_0x148[0x8];
    }; // 0x150
    static_assert(sizeof(BFUIWorldIconsElementData) == 0x150);
}
#pragma pack(pop)