// Object: UIMinimapLineStyle
// ClassId: 178
// RuntimeId: 3301
// TypeInfo: 0x0000000144D9BB90
#include "../CasablancaShared/BFUILegacyElementStyle.h"
#include "../CasablancaShared/UIMinimapColorStyle.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMinimapLineStyle : public CasablancaShared::BFUILegacyElementStyle {
        CasablancaShared::UIMinimapColorStyle Color; // 0x20
        CString TextureId; // 0x28
        Float32 TextureLengthScaling; // 0x30
        Float32 TextureSize; // 0x34
        Float32 TextureAngle; // 0x38
        Float32 AnimationSpeed; // 0x3C
        Float32 Width; // 0x40
        Boolean AlignTextureToEndpoints; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(UIMinimapLineStyle) == 0x48);
}
#pragma pack(pop)