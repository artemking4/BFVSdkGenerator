// Object: ClientUISPChapterInfoProviderEntity
// ClassId: 6987
// RuntimeId: 58426
// TypeInfo: 0x0000000144CC1D80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISPChapterInfoProviderEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientUISPChapterInfoProviderEntity) == 0xB0);
}