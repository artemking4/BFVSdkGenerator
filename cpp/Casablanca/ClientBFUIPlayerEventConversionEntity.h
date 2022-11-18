// Object: ClientBFUIPlayerEventConversionEntity
// ClassId: 6521
// RuntimeId: 59245
// TypeInfo: 0x0000000144CBC100
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPlayerEventConversionEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientBFUIPlayerEventConversionEntity) == 0x30);
}