// Object: SimpleHeliCameraTransformerEntityData
// ClassId: 2458
// RuntimeId: 60362
// TypeInfo: 0x0000000144DEE620
#include "../DiceShooterShared/CameraTransformerEntityData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class SimpleHeliCameraTransformerEntityData : public DiceShooterShared::CameraTransformerEntityData {
        char pad_0x28[0x8];
        Core::LinearTransform MoveFrame; // 0x30
    }; // 0x70
    static_assert(sizeof(SimpleHeliCameraTransformerEntityData) == 0x70);
}
#pragma pack(pop)