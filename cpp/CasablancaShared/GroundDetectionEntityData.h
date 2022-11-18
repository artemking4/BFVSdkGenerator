// Object: GroundDetectionEntityData
// ClassId: 2791
// RuntimeId: 35693
// TypeInfo: 0x0000000144D29C20
#include "../Entity/EntityData.h"
#include "../CasablancaShared/PronePoseAdjustBinding.h"
#include "../CasablancaShared/FallingBinding.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class GroundDetectionEntityData : public Entity::EntityData {
        CasablancaShared::PronePoseAdjustBinding PronePoseAdjustBindings; // 0x20
        char pad_0x84[0xC];
        Core::Vec3 RayStartPositionOffset; // 0x90
        Core::Vec3 TrajectoryForwardFactor; // 0xA0
        CasablancaShared::FallingBinding FallingBindings; // 0xB0
        Float32 RayLength; // 0xD8
        Float32 GroundDistanceRayLength; // 0xDC
        Float32 FallHighThreshold; // 0xE0
        char pad_0xE4[0xC];
    }; // 0xF0
    static_assert(sizeof(GroundDetectionEntityData) == 0xF0);
}
#pragma pack(pop)