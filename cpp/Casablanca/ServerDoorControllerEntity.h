// Object: ServerDoorControllerEntity
// ClassId: 7984
// RuntimeId: 44775
// TypeInfo: 0x0000000144C8C940
#include "../Casablanca/DoorControllerEntity.h"

namespace Casablanca {
    class ServerDoorControllerEntity : public Casablanca::DoorControllerEntity {
        char pad_0x180[0x10];
    }; // 0x190
    static_assert(sizeof(ServerDoorControllerEntity) == 0x190);
}