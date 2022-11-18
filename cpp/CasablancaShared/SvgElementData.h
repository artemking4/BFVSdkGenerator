// Object: SvgElementData
// ClassId: 3684
// RuntimeId: 58509
// TypeInfo: 0x0000000144D9C710
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../DiceSvgRasterizerShared/SvgImage.h"
#include "../Global/Boolean.h"
#include "../Core/Vec4.h"
#include "../GameShared/UIElementAlignment.h"
#include "../GameShared/UIBlendMode.h"
#include "../Global/Int32.h"
#include "../Core/Vec2.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class SvgElementData : public CasablancaShared::BFUIElementEntityData {
        Core::Vec4 UVRect; // 0x130
        DiceSvgRasterizerShared::SvgImage Image; // 0x140
        GameShared::UIElementAlignment HorizontalAlignment; // 0x148
        GameShared::UIElementAlignment VerticalAlignment; // 0x14C
        GameShared::UIBlendMode BlendMode; // 0x150
        Int32 ZOrder; // 0x154
        Core::Vec2 StaticRasterizationSize; // 0x158
        Boolean RasterizeOnSizeChanged; // 0x160
        Boolean KeepSourceScale; // 0x161
        Boolean KeepSourceAspectRatio; // 0x162
        Boolean AutoSizeHorizontally; // 0x163
        Boolean AutoSizeVertically; // 0x164
        Boolean UseColorAsOverlay; // 0x165
        Boolean OverrideBlendMode; // 0x166
        Boolean InvertColor; // 0x167
        char pad_0x168[0x8];
    }; // 0x170
    static_assert(sizeof(SvgElementData) == 0x170);
}
#pragma pack(pop)