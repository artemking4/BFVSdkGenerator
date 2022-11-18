// Object: ServerDoorManagerEntity
// ClassId: 7129
// RuntimeId: 28719
// TypeInfo: 0x0000000144C8CC70
#include "../Casablanca/DoorManagerEntity.h"

namespace Casablanca {
    class ServerDoorManagerEntity : public Casablanca::DoorManagerEntity {
        char pad_0x38[0x310];
    }; // 0x348
    static_assert(sizeof(ServerDoorManagerEntity) == 0x348);
}