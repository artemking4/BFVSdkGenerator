// Object: DeathExperienceEntityData
// ClassId: 2605
// RuntimeId: 59853
// TypeInfo: 0x0000000144C322F0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class DeathExperienceEntityData : public Entity::EntityData {
        Float32 SphereRadius; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 VictimOffset; // 0x30
        Core::Vec3 VictimOffsetNoKiller; // 0x40
        Core::Vec3 VictimOffsetVehicle; // 0x50
        Float32 CollisionOffsetY; // 0x60
        Float32 VehicleRadiusForOffsetScaling; // 0x64
        Float32 KillerLookAtOffsetY; // 0x68
        Float32 KillerTrackingSmoothness; // 0x6C
        Float32 OffsetBlendFactor; // 0x70
        Float32 ViewportHeightForSoldier; // 0x74
        Float32 ViewportHeightScaleForVehicle; // 0x78
        Float32 AbsoluteMinFOV; // 0x7C
        Float32 ViewportHeightBlendFactor; // 0x80
        Float32 MaxEndFovToZoom; // 0x84
        Float32 FovBlendFactor; // 0x88
        Float32 RotationBlendFactor; // 0x8C
        Float32 CameraSpeedScale; // 0x90
        Int32 UpdateRate; // 0x94
        char pad_0x98[0x8];
    }; // 0xA0
    static_assert(sizeof(DeathExperienceEntityData) == 0xA0);
}
#pragma pack(pop)