// Object: ClientUIDamageReportEntity
// ClassId: 6932
// RuntimeId: 48852
// TypeInfo: 0x0000000144C9C1C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIDamageReportEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientUIDamageReportEntity) == 0xA8);
}