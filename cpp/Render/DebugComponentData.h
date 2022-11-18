// Object: DebugComponentData
// ClassId: 1880
// RuntimeId: 60697
// TypeInfo: 0x0000000144F1C800
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../RenderBase/TextureBaseAsset.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace Render {
    class DebugComponentData : public Entity::VisualEnvironmentComponentData {
        RenderBase::TextureBaseAsset DebugTexture; // 0x90
        Boolean Enable; // 0x98
        Boolean Fullscreen; // 0x99
        Uint8 FieldFlagOverride0; // 0x9A
        char pad_0x9B[0x5];
    }; // 0xA0
    static_assert(sizeof(DebugComponentData) == 0xA0);
}
#pragma pack(pop)