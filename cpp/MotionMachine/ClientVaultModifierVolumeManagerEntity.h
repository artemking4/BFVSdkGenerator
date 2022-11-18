// Object: ClientVaultModifierVolumeManagerEntity
// ClassId: 7029
// RuntimeId: 3811
// TypeInfo: 0x0000000144EEEA20
#include "../Entity/Entity.h"

namespace MotionMachine {
    class ClientVaultModifierVolumeManagerEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientVaultModifierVolumeManagerEntity) == 0x50);
}