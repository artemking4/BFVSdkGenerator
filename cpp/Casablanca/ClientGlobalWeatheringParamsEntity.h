// Object: ClientGlobalWeatheringParamsEntity
// ClassId: 6721
// RuntimeId: 3532
// TypeInfo: 0x0000000144CD19A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientGlobalWeatheringParamsEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientGlobalWeatheringParamsEntity) == 0x88);
}