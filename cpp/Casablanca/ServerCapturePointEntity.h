// Object: ServerCapturePointEntity
// ClassId: 8012
// RuntimeId: 26908
// TypeInfo: 0x0000000144C5FB70
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerCapturePointEntity : public Entity::SpatialEntity {
        char pad_0x30[0x420];
    }; // 0x450
    static_assert(sizeof(ServerCapturePointEntity) == 0x450);
}