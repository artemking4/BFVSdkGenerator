// Object: ClientBFSpectator3pCameraInfoEntity
// ClassId: 6292
// RuntimeId: 4806
// TypeInfo: 0x0000000144CC1A50
#include "../DiceShooter/CameraTransformerEntity.h"

namespace Casablanca {
    class ClientBFSpectator3pCameraInfoEntity : public DiceShooter::CameraTransformerEntity {
        char pad_0x58[0x1F8];
    }; // 0x250
    static_assert(sizeof(ClientBFSpectator3pCameraInfoEntity) == 0x250);
}