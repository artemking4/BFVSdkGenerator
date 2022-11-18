// Object: RimeScreenRenderEntityData
// ClassId: 3956
// RuntimeId: 16545
// TypeInfo: 0x0000000144F27990
#include "../Entity/LogicReferenceObjectData.h"
#include "../RimeShared/RimeScreenData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../RimeShared/RimeScreenProjectionMode.h"
#include "../RimeShared/RimeScreenRenderingPass.h"
#include "../Global/Int32.h"
#include "../RenderBase/LocalPlayerViewId.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace RimeShared {
    class RimeScreenRenderEntityData : public Entity::LogicReferenceObjectData {
        Core::Vec3 Color; // 0xC0
        RimeShared::RimeScreenData ScreenData; // 0xD0
        Float32 Scale; // 0xD8
        RimeShared::RimeScreenProjectionMode ProjectionMode; // 0xDC
        RimeShared::RimeScreenRenderingPass RenderPass; // 0xE0
        Int32 UpdateOrder; // 0xE4
        RenderBase::LocalPlayerViewId ViewId; // 0xE8
        Float32 Alpha; // 0xEC
        Boolean UseGameViewProjection; // 0xF0
        Boolean EnableDepthCulling; // 0xF1
        Boolean CenterScreen; // 0xF2
        Boolean StartEnabled; // 0xF3
        char pad_0xF4[0xC];
    }; // 0x100
    static_assert(sizeof(RimeScreenRenderEntityData) == 0x100);
}
#pragma pack(pop)