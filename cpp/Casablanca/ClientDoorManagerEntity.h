// Object: ClientDoorManagerEntity
// ClassId: 7128
// RuntimeId: 45639
// TypeInfo: 0x0000000144C8CB60
#include "../Casablanca/DoorManagerEntity.h"

namespace Casablanca {
    class ClientDoorManagerEntity : public Casablanca::DoorManagerEntity {
        char pad_0x38[0xC8];
    }; // 0x100
    static_assert(sizeof(ClientDoorManagerEntity) == 0x100);
}