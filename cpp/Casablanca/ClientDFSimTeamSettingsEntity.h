// Object: ClientDFSimTeamSettingsEntity
// ClassId: 6651
// RuntimeId: 19484
// TypeInfo: 0x0000000144C8DB10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDFSimTeamSettingsEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientDFSimTeamSettingsEntity) == 0x30);
}