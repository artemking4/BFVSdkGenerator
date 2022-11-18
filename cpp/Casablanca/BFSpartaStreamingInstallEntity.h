// Object: BFSpartaStreamingInstallEntity
// ClassId: 6242
// RuntimeId: 27083
// TypeInfo: 0x0000000144C57330
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFSpartaStreamingInstallEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(BFSpartaStreamingInstallEntity) == 0x48);
}