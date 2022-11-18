// Object: UIMinimapColorStyle
// ClassId: 177
// RuntimeId: 58997
// TypeInfo: 0x0000000144D9BC10
#include "../CasablancaShared/BFUILegacyElementStyle.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIMinimapColorStyle : public CasablancaShared::BFUILegacyElementStyle {
        Float32 Alpha; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Rgb; // 0x30
    }; // 0x40
    static_assert(sizeof(UIMinimapColorStyle) == 0x40);
}
#pragma pack(pop)