// Object: ClientFootPlantEffectEntity
// ClassId: 6712
// RuntimeId: 41023
// TypeInfo: 0x0000000144CD5E80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFootPlantEffectEntity : public Entity::Entity {
        char pad_0x20[0x210];
    }; // 0x230
    static_assert(sizeof(ClientFootPlantEffectEntity) == 0x230);
}