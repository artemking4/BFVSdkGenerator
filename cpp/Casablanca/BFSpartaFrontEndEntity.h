// Object: BFSpartaFrontEndEntity
// ClassId: 6241
// RuntimeId: 50620
// TypeInfo: 0x0000000144C57440
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFSpartaFrontEndEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(BFSpartaFrontEndEntity) == 0x40);
}