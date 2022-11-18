// Object: ClientLCUEntity
// ClassId: 6737
// RuntimeId: 54324
// TypeInfo: 0x0000000144F08250
#include "../Entity/Entity.h"

namespace PatchBackend {
    class ClientLCUEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientLCUEntity) == 0x88);
}