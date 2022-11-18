// Object: ClientUISvgImageLookupEntity
// ClassId: 7012
// RuntimeId: 43865
// TypeInfo: 0x0000000144C9A860
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISvgImageLookupEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientUISvgImageLookupEntity) == 0x40);
}