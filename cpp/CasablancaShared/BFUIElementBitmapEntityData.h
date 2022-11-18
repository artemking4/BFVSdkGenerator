// Object: BFUIElementBitmapEntityData
// ClassId: 3641
// RuntimeId: 52055
// TypeInfo: 0x0000000144D9D390
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/CString.h"
#include "../Core/Vec4.h"
#include "../UIIncubatorShared/UITextureSource.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIElementAlignment.h"
#include "../GameShared/UIBlendMode.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementBitmapEntityData : public CasablancaShared::BFUIElementEntityData {
        Core::Vec4 UVRect; // 0x130
        UIIncubatorShared::UITextureSource TextureSource; // 0x140
        CString TextureId; // 0x160
        CString DynamicTextureId; // 0x168
        GameShared::UIElementAlignment HorizontalAlignment; // 0x170
        GameShared::UIElementAlignment VerticalAlignment; // 0x174
        GameShared::UIBlendMode BlendMode; // 0x178
        Int32 ZOrder; // 0x17C
        Boolean KeepSourceScale; // 0x180
        Boolean KeepSourceAspectRatio; // 0x181
        Boolean AutoSizeHorizontally; // 0x182
        Boolean AutoSizeVertically; // 0x183
        Boolean UseColorAsOverlay; // 0x184
        Boolean OverrideBlendMode; // 0x185
        Boolean InvertColor; // 0x186
        char pad_0x187[0x9];
    }; // 0x190
    static_assert(sizeof(BFUIElementBitmapEntityData) == 0x190);
}
#pragma pack(pop)