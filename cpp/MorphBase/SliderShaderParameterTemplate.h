// Object: SliderShaderParameterTemplate
// ClassId: 4598
// RuntimeId: 30549
// TypeInfo: 0x0000000144EA2F50
#include "../MorphBase/ShaderParameterTemplate.h"
#include "../Core/Vec4.h"
#include "../Global/Float32.h"
#include "../MorphBase/VectorShaderNumValuesUsed.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace MorphBase {
    class SliderShaderParameterTemplate : public MorphBase::ShaderParameterTemplate {
        char pad_0x28[0x8];
        Core::Vec4 Default; // 0x30
        Float32 Min; // 0x40
        Float32 Max; // 0x44
        Float32 Step; // 0x48
        MorphBase::VectorShaderNumValuesUsed ValuesUsed; // 0x4C
        CString PresentationNameX; // 0x50
        CString PresentationNameY; // 0x58
        CString PresentationNameZ; // 0x60
        CString PresentationNameW; // 0x68
    }; // 0x70
    static_assert(sizeof(SliderShaderParameterTemplate) == 0x70);
}
#pragma pack(pop)