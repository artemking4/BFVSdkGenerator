// Object: Vec4ShaderParameter
// ClassId: 4592
// RuntimeId: 23104
// TypeInfo: 0x0000000144EA2CD0
#include "../MorphBase/ShaderParameter.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace MorphBase {
    class Vec4ShaderParameter : public MorphBase::ShaderParameter {
        Core::Vec4 Value; // 0x20
    }; // 0x30
    static_assert(sizeof(Vec4ShaderParameter) == 0x30);
}
#pragma pack(pop)