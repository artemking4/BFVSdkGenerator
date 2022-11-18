// Object: ClientFOVScaleEntity
// ClassId: 6698
// RuntimeId: 33969
// TypeInfo: 0x0000000144CD5A40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFOVScaleEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientFOVScaleEntity) == 0x80);
}