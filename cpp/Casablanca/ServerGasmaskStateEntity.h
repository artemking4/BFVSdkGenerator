// Object: ServerGasmaskStateEntity
// ClassId: 7567
// RuntimeId: 30732
// TypeInfo: 0x0000000144C37FF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerGasmaskStateEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ServerGasmaskStateEntity) == 0x90);
}