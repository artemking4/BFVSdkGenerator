// Object: SpartaFrontEndCoreEntity
// ClassId: 7828
// RuntimeId: 31587
// TypeInfo: 0x0000000144F4B240
#include "../Entity/Entity.h"

namespace SpartaExtensionClient {
    class SpartaFrontEndCoreEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(SpartaFrontEndCoreEntity) == 0x68);
}