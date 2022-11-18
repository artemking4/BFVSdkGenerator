// Object: ChasingCameraTransformEntityData
// ClassId: 2456
// RuntimeId: 57769
// TypeInfo: 0x0000000144DEEA20
#include "../DiceShooterShared/CameraTransformerEntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ChasingCameraTransformEntityData : public DiceShooterShared::CameraTransformerEntityData {
        Float32 LinInertiaX; // 0x28
        Float32 LinInertiaY; // 0x2C
        Float32 LinInertiaZ; // 0x30
        char pad_0x34[0xC];
        Core::LinearTransform InTransform; // 0x40
        Float32 AngInertia; // 0x80
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(ChasingCameraTransformEntityData) == 0x90);
}
#pragma pack(pop)