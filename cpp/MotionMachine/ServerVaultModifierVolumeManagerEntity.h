// Object: ServerVaultModifierVolumeManagerEntity
// ClassId: 7777
// RuntimeId: 21070
// TypeInfo: 0x0000000144EEE800
#include "../Entity/Entity.h"

namespace MotionMachine {
    class ServerVaultModifierVolumeManagerEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ServerVaultModifierVolumeManagerEntity) == 0x50);
}