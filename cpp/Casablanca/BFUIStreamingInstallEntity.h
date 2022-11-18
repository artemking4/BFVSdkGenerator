// Object: BFUIStreamingInstallEntity
// ClassId: 6251
// RuntimeId: 32011
// TypeInfo: 0x0000000144C9AA80
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFUIStreamingInstallEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(BFUIStreamingInstallEntity) == 0x90);
}