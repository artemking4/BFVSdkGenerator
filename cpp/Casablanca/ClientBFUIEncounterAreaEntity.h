// Object: ClientBFUIEncounterAreaEntity
// ClassId: 6382
// RuntimeId: 48957
// TypeInfo: 0x0000000144C9ADB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIEncounterAreaEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientBFUIEncounterAreaEntity) == 0x38);
}