// Object: ClientEncounterInstanceEntity
// ClassId: 6686
// RuntimeId: 35370
// TypeInfo: 0x0000000144C8E060
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientEncounterInstanceEntity : public Entity::Entity {
        char pad_0x20[0x200];
    }; // 0x220
    static_assert(sizeof(ClientEncounterInstanceEntity) == 0x220);
}