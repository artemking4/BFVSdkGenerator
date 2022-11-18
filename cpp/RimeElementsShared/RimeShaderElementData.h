// Object: RimeShaderElementData
// ClassId: 3696
// RuntimeId: 2138
// TypeInfo: 0x0000000144F2A1A0
#include "../RimeElementsShared/RimeElementBaseData.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"

#pragma pack(push, 16)
namespace RimeElementsShared {
    class RimeShaderElementData : public RimeElementsShared::RimeElementBaseData {
        RenderBase::SurfaceShaderInstanceDataStruct Shader; // 0x110
        char pad_0x138[0x8];
    }; // 0x140
    static_assert(sizeof(RimeShaderElementData) == 0x140);
}
#pragma pack(pop)