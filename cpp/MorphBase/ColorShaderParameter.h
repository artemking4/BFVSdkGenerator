// Object: ColorShaderParameter
// ClassId: 4593
// RuntimeId: 17892
// TypeInfo: 0x0000000144EA2C50
#include "../MorphBase/Vec4ShaderParameter.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace MorphBase {
    class ColorShaderParameter : public MorphBase::Vec4ShaderParameter {
        Int32 PaletteIndex; // 0x30
        char pad_0x34[0xC];
    }; // 0x40
    static_assert(sizeof(ColorShaderParameter) == 0x40);
}
#pragma pack(pop)