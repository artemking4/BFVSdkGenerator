// Object: UnlockableShaderParameterValueCollection
// ClassId: 5557
// RuntimeId: 8537
// TypeInfo: 0x0000000144E81A40
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class UnlockableShaderParameterValueCollection : public Core::DataContainer {
        CString ShaderParameterName; // 0x18
    }; // 0x20
    static_assert(sizeof(UnlockableShaderParameterValueCollection) == 0x20);
}
#pragma pack(pop)