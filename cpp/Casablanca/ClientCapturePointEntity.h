// Object: ClientCapturePointEntity
// ClassId: 7853
// RuntimeId: 6520
// TypeInfo: 0x0000000144C8DD30
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientCapturePointEntity : public Entity::SpatialEntity {
        char pad_0x30[0x440];
    }; // 0x470
    static_assert(sizeof(ClientCapturePointEntity) == 0x470);
}