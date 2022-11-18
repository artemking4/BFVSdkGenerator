// Object: TerrainShaderParameterEntityData
// ClassId: 3570
// RuntimeId: 39414
// TypeInfo: 0x0000000144F1C200
#include "../Entity/EntityData.h"
#include "../Render/TerrainShaderParameter.h"

#pragma pack(push, 8)
namespace Render {
    class TerrainShaderParameterEntityData : public Entity::EntityData {
        Array<Render::TerrainShaderParameter> ShaderParameters; // 0x20
    }; // 0x28
    static_assert(sizeof(TerrainShaderParameterEntityData) == 0x28);
}
#pragma pack(pop)