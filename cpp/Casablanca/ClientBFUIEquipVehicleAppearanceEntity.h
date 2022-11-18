// Object: ClientBFUIEquipVehicleAppearanceEntity
// ClassId: 6388
// RuntimeId: 45571
// TypeInfo: 0x0000000144CAAB80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIEquipVehicleAppearanceEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFUIEquipVehicleAppearanceEntity) == 0x48);
}