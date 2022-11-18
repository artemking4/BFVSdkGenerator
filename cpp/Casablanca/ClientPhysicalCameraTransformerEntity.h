// Object: ClientPhysicalCameraTransformerEntity
// ClassId: 6293
// RuntimeId: 30289
// TypeInfo: 0x0000000144CD50B0
#include "../DiceShooter/CameraTransformerEntity.h"

namespace Casablanca {
    class ClientPhysicalCameraTransformerEntity : public DiceShooter::CameraTransformerEntity {
        char pad_0x58[0xD68];
    }; // 0xDC0
    static_assert(sizeof(ClientPhysicalCameraTransformerEntity) == 0xDC0);
}