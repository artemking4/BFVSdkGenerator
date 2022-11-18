// Object: ClientBFUICalibrationManagerEntity
// ClassId: 6369
// RuntimeId: 21172
// TypeInfo: 0x0000000144CB8290
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUICalibrationManagerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientBFUICalibrationManagerEntity) == 0x30);
}