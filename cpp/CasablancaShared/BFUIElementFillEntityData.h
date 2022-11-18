// Object: BFUIElementFillEntityData
// ClassId: 3651
// RuntimeId: 33193
// TypeInfo: 0x0000000144D9D110
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/BFUILegacyElementFillData.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIBlendMode.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementFillEntityData : public CasablancaShared::BFUIElementEntityData {
        CasablancaShared::BFUILegacyElementFillData Style; // 0x130
        GameShared::UIBlendMode BackgroundBlendMode; // 0x138
        GameShared::UIBlendMode OutlineBlendMode; // 0x13C
        Int32 ZOrder; // 0x140
        Boolean OverrideBackgroundBlendMode; // 0x144
        Boolean OverrideOutlineBlendMode; // 0x145
        Boolean DrawBackground; // 0x146
        Boolean DrawOutline; // 0x147
        Boolean UseColorAsOverlay; // 0x148
        char pad_0x149[0x7];
    }; // 0x150
    static_assert(sizeof(BFUIElementFillEntityData) == 0x150);
}
#pragma pack(pop)