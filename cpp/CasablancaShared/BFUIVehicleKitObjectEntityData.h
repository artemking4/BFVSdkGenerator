// Object: BFUIVehicleKitObjectEntityData
// ClassId: 2418
// RuntimeId: 42189
// TypeInfo: 0x0000000144D84EA0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIVehicleKitStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleKitObjectEntityData : public Entity::EntityData {
        CasablancaShared::BFUIVehicleKitStruct StaticVehicleKit; // 0x20
    }; // 0x40
    static_assert(sizeof(BFUIVehicleKitObjectEntityData) == 0x40);
}
#pragma pack(pop)