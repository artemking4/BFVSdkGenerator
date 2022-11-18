// Object: RimeTextInputStyle
// ClassId: 711
// RuntimeId: 42267
// TypeInfo: 0x0000000144F2B310
#include "../RimeShared/RimeFontStyle.h"
#include "../Global/Int32.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace RimeElementsShared {
    class RimeTextInputStyle : public RimeShared::RimeFontStyle {
        Core::Vec4 CaretColor; // 0x60
        Core::Vec4 PlaceholderTextColor; // 0x70
        Core::Vec4 SelectedTextColor; // 0x80
        Core::Vec4 SelectionBoxColor; // 0x90
        Int32 CaretThickness; // 0xA0
        Int32 CaretOffset; // 0xA4
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(RimeTextInputStyle) == 0xB0);
}
#pragma pack(pop)