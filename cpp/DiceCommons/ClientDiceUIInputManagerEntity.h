// Object: ClientDiceUIInputManagerEntity
// ClassId: 6670
// RuntimeId: 65023
// TypeInfo: 0x0000000144DACE70
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientDiceUIInputManagerEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientDiceUIInputManagerEntity) == 0x68);
}