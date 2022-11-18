// Object: ShaderParameterEntityData
// ClassId: 3202
// RuntimeId: 42540
// TypeInfo: 0x0000000144F1C280
#include "../Entity/EntityData.h"
#include "../Global/Uint32.h"
#include "../Render/ShaderParameterDataType.h"
#include "../Core/Vec4.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Render {
    class ShaderParameterEntityData : public Entity::EntityData {
        Uint32 ParameterHandle; // 0x20
        char pad_0x24[0xC];
        Core::Vec4 VecParam; // 0x30
        Render::ShaderParameterDataType ParameterType; // 0x40
        Float32 X; // 0x44
        Float32 Y; // 0x48
        Float32 Z; // 0x4C
        Float32 W; // 0x50
        Boolean BoolParam; // 0x54
        Boolean UseVecParam; // 0x55
        char pad_0x56[0xA];
    }; // 0x60
    static_assert(sizeof(ShaderParameterEntityData) == 0x60);
}
#pragma pack(pop)