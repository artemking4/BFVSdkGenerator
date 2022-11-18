// Object: UIScreenRenderTargetEntityData
// ClassId: 3964
// RuntimeId: 38620
// TypeInfo: 0x0000000144F6DDC0
#include "../GameShared/UIScreenRenderEntityData.h"
#include "../UIIncubatorShared/UIRenderTargetRegionAsset.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace UIIncubatorShared {
    class UIScreenRenderTargetEntityData : public GameShared::UIScreenRenderEntityData {
        Core::Vec3 ClearColor; // 0x140
        UIIncubatorShared::UIRenderTargetRegionAsset Region; // 0x150
        Float32 ClearAlpha; // 0x158
        Int32 ClearStencil; // 0x15C
        Boolean ClearRenderTarget; // 0x160
        char pad_0x161[0xF];
    }; // 0x170
    static_assert(sizeof(UIScreenRenderTargetEntityData) == 0x170);
}
#pragma pack(pop)