// Object: ClientYawPitchRelativeToTransformEntity
// ClassId: 7062
// RuntimeId: 15267
// TypeInfo: 0x0000000144C92C60
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientYawPitchRelativeToTransformEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientYawPitchRelativeToTransformEntity) == 0x68);
}