// Object: ClientDoorControllerEntity
// ClassId: 7983
// RuntimeId: 62389
// TypeInfo: 0x0000000144C8C830
#include "../Casablanca/DoorControllerEntity.h"

namespace Casablanca {
    class ClientDoorControllerEntity : public Casablanca::DoorControllerEntity {
        char pad_0x180[0x10];
    }; // 0x190
    static_assert(sizeof(ClientDoorControllerEntity) == 0x190);
}