// Object: StarfighterCameraTransformerEntity
// ClassId: 6295
// RuntimeId: 30716
// TypeInfo: 0x0000000144DD8190
#include "../DiceShooter/CameraTransformerEntity.h"

namespace DiceShooter {
    class StarfighterCameraTransformerEntity : public DiceShooter::CameraTransformerEntity {
        char pad_0x58[0x38];
    }; // 0x90
    static_assert(sizeof(StarfighterCameraTransformerEntity) == 0x90);
}