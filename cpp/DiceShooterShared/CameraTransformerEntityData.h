// Object: CameraTransformerEntityData
// ClassId: 2451
// RuntimeId: 60679
// TypeInfo: 0x0000000144DEEB20
#include "../Entity/EntityData.h"
#include "../DiceShooterShared/CameraTransformerUpdatePass.h"
#include "../Global/Boolean.h"

namespace DiceShooterShared {
    class CameraTransformerEntityData : public Entity::EntityData {
        DiceShooterShared::CameraTransformerUpdatePass UpdatePass; // 0x20
        Boolean UpdateOnPropertyChanged; // 0x24
        Boolean Active; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(CameraTransformerEntityData) == 0x28);
}