// Object: ClientBFUISlotEquippedVehicleAppearanceEntity
// ClassId: 6571
// RuntimeId: 28128
// TypeInfo: 0x0000000144CC8970
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISlotEquippedVehicleAppearanceEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientBFUISlotEquippedVehicleAppearanceEntity) == 0x68);
}