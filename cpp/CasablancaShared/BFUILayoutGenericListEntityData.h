// Object: BFUILayoutGenericListEntityData
// ClassId: 2291
// RuntimeId: 26667
// TypeInfo: 0x0000000144D97B10
#include "../CasablancaShared/BFUILayoutEntityData.h"
#include "../Core/Vec2.h"
#include "../CasablancaShared/BFUILayoutHorizontalAlignment.h"
#include "../CasablancaShared/BFUILayoutVerticalAlignment.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILayoutGenericListEntityData : public CasablancaShared::BFUILayoutEntityData {
        Core::Vec2 LayoutMargin; // 0x28
        Core::Vec2 ElementMargin; // 0x30
        Core::Vec2 ElementStep; // 0x38
        Core::Vec2 ElementStepFactor; // 0x40
        Core::Vec2 ElementPivot; // 0x48
        CasablancaShared::BFUILayoutHorizontalAlignment HorizontalAlignment; // 0x50
        CasablancaShared::BFUILayoutVerticalAlignment VerticalAlignment; // 0x54
        Boolean AutoSizeElementsHorizontally; // 0x58
        Boolean AutoSizeElementsVertically; // 0x59
        Boolean DrawZeroSizeElement; // 0x5A
        char pad_0x5B[0x5];
    }; // 0x60
    static_assert(sizeof(BFUILayoutGenericListEntityData) == 0x60);
}
#pragma pack(pop)