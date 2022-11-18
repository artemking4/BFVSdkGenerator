// Object: BFUIElementBitmapBlendEntityData
// ClassId: 3640
// RuntimeId: 18532
// TypeInfo: 0x0000000144D9D310
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../CasablancaShared/BFUIBitmapBlend.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"
#include "../Core/Vec4.h"
#include "../Global/Boolean.h"
#include "../UIIncubatorShared/UITextureSource.h"
#include "../GameShared/UIBlendMode.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementBitmapBlendEntityData : public CasablancaShared::BFUIElementEntityData {
        Core::Vec4 UVRectBaseModifier; // 0x130
        Core::Vec4 UVRectBlendModifier; // 0x140
        UIIncubatorShared::UITextureSource TextureSourceBase; // 0x150
        UIIncubatorShared::UITextureSource TextureSourceBlend; // 0x170
        CasablancaShared::BFUIBitmapBlend BitmapBlend; // 0x190
        Float32 BitmapBlendValue; // 0x194
        CString TextureIdBase; // 0x198
        CString TextureIdBlend; // 0x1A0
        CString DynamicTextureIdBase; // 0x1A8
        CString DynamicTextureIdBlend; // 0x1B0
        GameShared::UIBlendMode BlendMode; // 0x1B8
        Int32 ZOrder; // 0x1BC
        Boolean UVRectBaseClamp; // 0x1C0
        Boolean UVRectBlendClamp; // 0x1C1
        Boolean KeepSourceScale; // 0x1C2
        Boolean UseColorAsOverlay; // 0x1C3
        Boolean OverrideBlendMode; // 0x1C4
        char pad_0x1C5[0xB];
    }; // 0x1D0
    static_assert(sizeof(BFUIElementBitmapBlendEntityData) == 0x1D0);
}
#pragma pack(pop)