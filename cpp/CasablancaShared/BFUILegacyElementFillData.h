// Object: BFUILegacyElementFillData
// ClassId: 163
// RuntimeId: 46073
// TypeInfo: 0x0000000144D97790
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/UIElementColor.h"
#include "../GameShared/UIElementGradient.h"
#include "../GameShared/UIBlendMode.h"
#include "../Global/CString.h"
#include "../CasablancaShared/BFUILegacyElementSlice9FillData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUILegacyElementFillData : public Core::Asset {
        Float32 BackgroundAntiAliasingWidth; // 0x20
        char pad_0x24[0xC];
        GameShared::UIElementColor BackgroundColor; // 0x30
        GameShared::UIElementGradient BackgroundGradient; // 0x50
        GameShared::UIElementColor OutlineColor; // 0xD0
        GameShared::UIElementGradient OutlineGradient; // 0xF0
        Float32 OutlineAntiAliasingWidth; // 0x170
        GameShared::UIBlendMode BackgroundBlendMode; // 0x174
        GameShared::UIBlendMode OutlineBlendMode; // 0x178
        char pad_0x17C[0x4];
        CString TextureId; // 0x180
        CasablancaShared::BFUILegacyElementSlice9FillData Slice9Fill; // 0x188
        Boolean DrawBackground; // 0x190
        Boolean UseBackgroundGradient; // 0x191
        Boolean UseBackgroundAntiAliasing; // 0x192
        Boolean DrawOutline; // 0x193
        Boolean UseOutlineGradient; // 0x194
        Boolean UseOutlineAntiAliasing; // 0x195
        char pad_0x196[0xA];
    }; // 0x1A0
    static_assert(sizeof(BFUILegacyElementFillData) == 0x1A0);
}
#pragma pack(pop)