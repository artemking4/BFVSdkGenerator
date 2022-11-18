// Object: ClientUIVehicleSeatRotationEntityData
// ClassId: 2510
// RuntimeId: 52203
// TypeInfo: 0x0000000144D41250
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientUIVehicleSeatRotationEntityData : public Entity::EntityData {
        Int32 LocalPlayerInSeat; // 0x20
        Boolean Enabled; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(ClientUIVehicleSeatRotationEntityData) == 0x28);
}
#pragma pack(pop)