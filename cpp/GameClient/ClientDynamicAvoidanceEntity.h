// Object: ClientDynamicAvoidanceEntity
// ClassId: 6680
// RuntimeId: 27885
// TypeInfo: 0x0000000144E3A390
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientDynamicAvoidanceEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientDynamicAvoidanceEntity) == 0x48);
}