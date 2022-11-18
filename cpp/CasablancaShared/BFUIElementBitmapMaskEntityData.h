// Object: BFUIElementBitmapMaskEntityData
// ClassId: 3645
// RuntimeId: 57577
// TypeInfo: 0x0000000144D9CB10
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIBlendMode.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementBitmapMaskEntityData : public CasablancaShared::BFUIElementEntityData {
        CString DynamicTextureId; // 0x130
        CString MaskTextureId; // 0x138
        Float32 AlphaTest; // 0x140
        GameShared::UIBlendMode BlendMode; // 0x144
        Boolean InvertAlphaTest; // 0x148
        Boolean InvertMaskTexture; // 0x149
        Boolean UseColorAsOverlay; // 0x14A
        Boolean OverrideBlendMode; // 0x14B
        char pad_0x14C[0x4];
    }; // 0x150
    static_assert(sizeof(BFUIElementBitmapMaskEntityData) == 0x150);
}
#pragma pack(pop)