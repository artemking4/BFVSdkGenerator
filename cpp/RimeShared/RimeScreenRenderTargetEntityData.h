// Object: RimeScreenRenderTargetEntityData
// ClassId: 3957
// RuntimeId: 54921
// TypeInfo: 0x0000000144F27910
#include "../RimeShared/RimeScreenRenderEntityData.h"
#include "../Render/RenderTextureAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace RimeShared {
    class RimeScreenRenderTargetEntityData : public RimeShared::RimeScreenRenderEntityData {
        Render::RenderTextureAsset RenderTarget; // 0x100
        Boolean GenerateRenderTarget; // 0x108
        Boolean CreateRenderTargetStencil; // 0x109
        Boolean ClearRenderTarget; // 0x10A
        Boolean RenderOnEvent; // 0x10B
        char pad_0x10C[0x4];
    }; // 0x110
    static_assert(sizeof(RimeScreenRenderTargetEntityData) == 0x110);
}
#pragma pack(pop)