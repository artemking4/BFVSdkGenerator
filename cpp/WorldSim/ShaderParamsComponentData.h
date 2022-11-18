// Object: ShaderParamsComponentData
// ClassId: 1904
// RuntimeId: 24697
// TypeInfo: 0x0000000144EC1940
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Core/Vec4.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class ShaderParamsComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec4 Vec4Value; // 0x90
        CString ParameterName; // 0xA0
        Uint8 FieldFlagOverride0; // 0xA8
        char pad_0xA9[0x7];
    }; // 0xB0
    static_assert(sizeof(ShaderParamsComponentData) == 0xB0);
}
#pragma pack(pop)