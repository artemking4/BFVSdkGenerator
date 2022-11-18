// Object: CameraInertiaTransformEntityData
// ClassId: 2454
// RuntimeId: 8609
// TypeInfo: 0x0000000144DEEAA0
#include "../DiceShooterShared/CameraTransformerEntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class CameraInertiaTransformEntityData : public DiceShooterShared::CameraTransformerEntityData {
        Float32 LinInertiaX; // 0x28
        Float32 LinInertiaY; // 0x2C
        Float32 LinInertiaZ; // 0x30
        char pad_0x34[0xC];
        Core::LinearTransform InTransform; // 0x40
        Float32 AngInertia; // 0x80
        Boolean IsWorldSpaceTransform; // 0x84
        char pad_0x85[0xB];
    }; // 0x90
    static_assert(sizeof(CameraInertiaTransformEntityData) == 0x90);
}
#pragma pack(pop)