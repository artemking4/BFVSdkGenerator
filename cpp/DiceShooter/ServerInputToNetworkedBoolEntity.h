// Object: ServerInputToNetworkedBoolEntity
// ClassId: 7578
// RuntimeId: 51753
// TypeInfo: 0x0000000144DD5410
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerInputToNetworkedBoolEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerInputToNetworkedBoolEntity) == 0x70);
}