// Object: ClientTrackPlayerEntity
// ClassId: 6904
// RuntimeId: 25837
// TypeInfo: 0x0000000144C4B5B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientTrackPlayerEntity : public Entity::Entity {
        char pad_0x20[0x180];
    }; // 0x1A0
    static_assert(sizeof(ClientTrackPlayerEntity) == 0x1A0);
}