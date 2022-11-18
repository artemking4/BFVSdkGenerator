// Object: ClientBFSpectatorInputModifierEntity
// ClassId: 6351
// RuntimeId: 36664
// TypeInfo: 0x0000000144CCD2E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSpectatorInputModifierEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientBFSpectatorInputModifierEntity) == 0x70);
}