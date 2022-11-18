// Object: BFUIVehicleKitObjectListEntityData
// ClassId: 2419
// RuntimeId: 22365
// TypeInfo: 0x0000000144D84E20
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIVehicleKitStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleKitObjectListEntityData : public Entity::EntityData {
        Array<CasablancaShared::BFUIVehicleKitStruct> StaticVehicleKitList; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIVehicleKitObjectListEntityData) == 0x28);
}
#pragma pack(pop)