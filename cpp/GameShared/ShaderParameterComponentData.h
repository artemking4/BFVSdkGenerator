// Object: ShaderParameterComponentData
// ClassId: 1830
// RuntimeId: 47136
// TypeInfo: 0x0000000144E82440
#include "../Entity/GameComponentData.h"
#include "../GameShared/ShaderParameterVector.h"
#include "../GameShared/ShaderParameterTexture.h"

#pragma pack(push, 16)
namespace GameShared {
    class ShaderParameterComponentData : public Entity::GameComponentData {
        Array<GameShared::ShaderParameterVector> ShaderParameterVectors; // 0x80
        Array<GameShared::ShaderParameterTexture> ShaderParameterTexture; // 0x88
    }; // 0x90
    static_assert(sizeof(ShaderParameterComponentData) == 0x90);
}
#pragma pack(pop)