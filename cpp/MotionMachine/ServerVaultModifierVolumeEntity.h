// Object: ServerVaultModifierVolumeEntity
// ClassId: 8047
// RuntimeId: 41788
// TypeInfo: 0x0000000144EEE910
#include "../Entity/SpatialEntity.h"

namespace MotionMachine {
    class ServerVaultModifierVolumeEntity : public Entity::SpatialEntity {
        char pad_0x30[0xD0];
    }; // 0x100
    static_assert(sizeof(ServerVaultModifierVolumeEntity) == 0x100);
}