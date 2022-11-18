// Object: BFUIVehicleInstanceObjectEntityData
// ClassId: 2416
// RuntimeId: 28023
// TypeInfo: 0x0000000144D84DA0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIVehicleKitStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleInstanceObjectEntityData : public Entity::EntityData {
        CasablancaShared::BFUIVehicleKitStruct StaticVehicleKit; // 0x20
    }; // 0x40
    static_assert(sizeof(BFUIVehicleInstanceObjectEntityData) == 0x40);
}
#pragma pack(pop)