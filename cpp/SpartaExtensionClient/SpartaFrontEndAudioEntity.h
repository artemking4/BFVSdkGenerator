// Object: SpartaFrontEndAudioEntity
// ClassId: 7827
// RuntimeId: 63664
// TypeInfo: 0x0000000144F4B350
#include "../Entity/Entity.h"

namespace SpartaExtensionClient {
    class SpartaFrontEndAudioEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(SpartaFrontEndAudioEntity) == 0x38);
}