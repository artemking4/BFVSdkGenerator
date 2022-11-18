// Object: ChasingCameraTransformEntity
// ClassId: 6291
// RuntimeId: 17125
// TypeInfo: 0x0000000144DD83B0
#include "../DiceShooter/CameraTransformerEntity.h"

namespace DiceShooter {
    class ChasingCameraTransformEntity : public DiceShooter::CameraTransformerEntity {
        char pad_0x58[0xA8];
    }; // 0x100
    static_assert(sizeof(ChasingCameraTransformEntity) == 0x100);
}