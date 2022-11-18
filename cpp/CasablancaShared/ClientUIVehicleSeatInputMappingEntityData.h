// Object: ClientUIVehicleSeatInputMappingEntityData
// ClassId: 2509
// RuntimeId: 39971
// TypeInfo: 0x0000000144D411D0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientUIVehicleSeatInputMappingEntityData : public Entity::EntityData {
        Int32 LocalPlayerInSeat; // 0x20
        Boolean Enabled; // 0x24
        Boolean PadUIVisible; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(ClientUIVehicleSeatInputMappingEntityData) == 0x28);
}
#pragma pack(pop)