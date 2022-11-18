// Object: BFSpectatorCollidableFreeCameraData
// ClassId: 1678
// RuntimeId: 9518
// TypeInfo: 0x0000000144D35930
#include "../GameShared/CameraData.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../CasablancaShared/BFSpectatorCameraLookAtInfo.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFSpectatorCollidableFreeCameraData : public GameShared::CameraData {
        Core::Vec3 MaxBounceVelocity; // 0x80
        Float32 CollisionRadius; // 0x90
        Float32 RotateYLimit; // 0x94
        Float32 ConstraintDynamicFriction; // 0x98
        Float32 ConstraintVelocityMultiplier; // 0x9C
        CasablancaShared::BFSpectatorCameraLookAtInfo LookAtInfo; // 0xA0
        Float32 MinCameraFieldOfView; // 0xBC
        Float32 MaxCameraFieldOfView; // 0xC0
        char pad_0xC4[0xC];
    }; // 0xD0
    static_assert(sizeof(BFSpectatorCollidableFreeCameraData) == 0xD0);
}
#pragma pack(pop)