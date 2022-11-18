// Object: SimpleHeliCameraTransformerEntity
// ClassId: 6294
// RuntimeId: 41801
// TypeInfo: 0x0000000144DD82A0
#include "../DiceShooter/CameraTransformerEntity.h"

namespace DiceShooter {
    class SimpleHeliCameraTransformerEntity : public DiceShooter::CameraTransformerEntity {
        char pad_0x58[0xD8];
    }; // 0x130
    static_assert(sizeof(SimpleHeliCameraTransformerEntity) == 0x130);
}