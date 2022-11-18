// Object: VelocityRedirectCameraTransformerEntity
// ClassId: 6297
// RuntimeId: 42606
// TypeInfo: 0x0000000144DD7F70
#include "../DiceShooter/CameraTransformerEntity.h"

namespace DiceShooter {
    class VelocityRedirectCameraTransformerEntity : public DiceShooter::CameraTransformerEntity {
        char pad_0x58[0x28];
    }; // 0x80
    static_assert(sizeof(VelocityRedirectCameraTransformerEntity) == 0x80);
}