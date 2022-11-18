// Object: UIScreenRenderEntityData
// ClassId: 3962
// RuntimeId: 23124
// TypeInfo: 0x0000000144E95830
#include "../Entity/LogicReferenceObjectData.h"
#include "../GameShared/UICppScreenData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/UIScreenProjectionMode.h"
#include "../GameShared/UIScreenRenderingPass.h"
#include "../Global/Int32.h"
#include "../RenderBase/LocalPlayerViewId.h"
#include "../Core/Vec3.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec2.h"

#pragma pack(push, 16)
namespace GameShared {
    class UIScreenRenderEntityData : public Entity::LogicReferenceObjectData {
        Core::Vec3 Color; // 0xC0
        Core::LinearTransform ScreenTransform; // 0xD0
        GameShared::UICppScreenData ScreenData; // 0x110
        Float32 Scale; // 0x118
        GameShared::UIScreenProjectionMode ProjectionMode; // 0x11C
        GameShared::UIScreenRenderingPass RenderPass; // 0x120
        Int32 UpdateOrder; // 0x124
        RenderBase::LocalPlayerViewId ViewId; // 0x128
        Float32 Alpha; // 0x12C
        Core::Vec2 ScreenPivot; // 0x130
        Boolean UseGameViewProjection; // 0x138
        Boolean EnableDepthCulling; // 0x139
        Boolean CenterScreen; // 0x13A
        char pad_0x13B[0x5];
    }; // 0x140
    static_assert(sizeof(UIScreenRenderEntityData) == 0x140);
}
#pragma pack(pop)