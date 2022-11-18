// Object: ThirdPersonCameraTransformerEntity
// ClassId: 6296
// RuntimeId: 46392
// TypeInfo: 0x0000000144DD8080
#include "../DiceShooter/CameraTransformerEntity.h"

namespace DiceShooter {
    class ThirdPersonCameraTransformerEntity : public DiceShooter::CameraTransformerEntity {
        char pad_0x58[0xA8];
    }; // 0x100
    static_assert(sizeof(ThirdPersonCameraTransformerEntity) == 0x100);
}