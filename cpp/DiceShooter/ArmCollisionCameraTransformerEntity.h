// Object: ArmCollisionCameraTransformerEntity
// ClassId: 6288
// RuntimeId: 1843
// TypeInfo: 0x0000000144DD06D0
#include "../DiceShooter/CameraTransformerEntity.h"

namespace DiceShooter {
    class ArmCollisionCameraTransformerEntity : public DiceShooter::CameraTransformerEntity {
        char pad_0x58[0x3C8];
    }; // 0x420
    static_assert(sizeof(ArmCollisionCameraTransformerEntity) == 0x420);
}