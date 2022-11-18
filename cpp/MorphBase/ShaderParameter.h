// Object: ShaderParameter
// ClassId: 4590
// RuntimeId: 60169
// TypeInfo: 0x0000000144EA2D50
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace MorphBase {
    class ShaderParameter : public Core::DataContainer {
        CString ParameterName; // 0x18
    }; // 0x20
    static_assert(sizeof(ShaderParameter) == 0x20);
}
#pragma pack(pop)