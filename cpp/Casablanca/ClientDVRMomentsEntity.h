// Object: ClientDVRMomentsEntity
// ClassId: 6653
// RuntimeId: 5116
// TypeInfo: 0x0000000144C49F30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDVRMomentsEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientDVRMomentsEntity) == 0x30);
}