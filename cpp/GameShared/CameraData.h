// Object: CameraData
// ClassId: 1677
// RuntimeId: 37703
// TypeInfo: 0x0000000144E83AC0
#include "../Entity/GameObjectData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../RenderBase/LocalPlayerViewId.h"

#pragma pack(push, 16)
namespace GameShared {
    class CameraData : public Entity::GameObjectData {
        Float32 PreFadeTime; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 OcclusionRayOffset; // 0x30
        Core::Vec3 CameraShakeLimits; // 0x40
        Float32 FadeTime; // 0x50
        Float32 FadeWaitTime; // 0x54
        Float32 NearPlane; // 0x58
        Float32 ShadowViewDistanceScale; // 0x5C
        Float32 SoundOcclusion; // 0x60
        Float32 SoundListenerRadius; // 0x64
        Float32 SoundListenerFov; // 0x68
        Float32 ShakeFactor; // 0x6C
        RenderBase::LocalPlayerViewId ViewId; // 0x70
        Boolean StayFadedWhileStreaming; // 0x74
        Boolean EnableCameraShakeLimits; // 0x75
        char pad_0x76[0xA];
    }; // 0x80
    static_assert(sizeof(CameraData) == 0x80);
}
#pragma pack(pop)