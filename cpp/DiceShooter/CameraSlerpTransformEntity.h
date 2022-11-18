// Object: CameraSlerpTransformEntity
// ClassId: 6290
// RuntimeId: 56323
// TypeInfo: 0x0000000144DD04B0
#include "../DiceShooter/CameraTransformerEntity.h"

namespace DiceShooter {
    class CameraSlerpTransformEntity : public DiceShooter::CameraTransformerEntity {
        char pad_0x58[0x98];
    }; // 0xF0
    static_assert(sizeof(CameraSlerpTransformEntity) == 0xF0);
}