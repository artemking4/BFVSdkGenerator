// Object: BFUIElement3SliceStatbarStyle
// ClassId: 168
// RuntimeId: 15275
// TypeInfo: 0x0000000144D9CE10
#include "../CasablancaShared/BFUILegacyElementStyle.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIElement3SliceStatbarStyle : public CasablancaShared::BFUILegacyElementStyle {
        CString LeftTexture; // 0x20
        CString FillerTexture; // 0x28
        CString RightTexture; // 0x30
        CString BackLeftTexture; // 0x38
        CString BackFillerTexture; // 0x40
        CString BackRightTexture; // 0x48
        Boolean KeepSize; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(BFUIElement3SliceStatbarStyle) == 0x58);
}
#pragma pack(pop)