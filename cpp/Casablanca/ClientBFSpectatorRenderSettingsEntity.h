// Object: ClientBFSpectatorRenderSettingsEntity
// ClassId: 6354
// RuntimeId: 47780
// TypeInfo: 0x0000000144CCCB70
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSpectatorRenderSettingsEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClientBFSpectatorRenderSettingsEntity) == 0x90);
}