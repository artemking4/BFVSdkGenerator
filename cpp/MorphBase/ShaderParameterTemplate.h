// Object: ShaderParameterTemplate
// ClassId: 4595
// RuntimeId: 58293
// TypeInfo: 0x0000000144EA2FD0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../MorphBase/MorphSliderType.h"

#pragma pack(push, 8)
namespace MorphBase {
    class ShaderParameterTemplate : public Core::DataContainer {
        CString ParameterName; // 0x18
        MorphBase::MorphSliderType Category; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ShaderParameterTemplate) == 0x28);
}
#pragma pack(pop)