// Object: ClientVaultModifierVolumeEntity
// ClassId: 7880
// RuntimeId: 42481
// TypeInfo: 0x0000000144EEEB30
#include "../Entity/SpatialEntity.h"

namespace MotionMachine {
    class ClientVaultModifierVolumeEntity : public Entity::SpatialEntity {
        char pad_0x30[0xD0];
    }; // 0x100
    static_assert(sizeof(ClientVaultModifierVolumeEntity) == 0x100);
}