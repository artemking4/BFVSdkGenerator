// Object: CameraInertiaTransformEntity
// ClassId: 6289
// RuntimeId: 52537
// TypeInfo: 0x0000000144DD05C0
#include "../DiceShooter/CameraTransformerEntity.h"

namespace DiceShooter {
    class CameraInertiaTransformEntity : public DiceShooter::CameraTransformerEntity {
        char pad_0x58[0xA8];
    }; // 0x100
    static_assert(sizeof(CameraInertiaTransformEntity) == 0x100);
}