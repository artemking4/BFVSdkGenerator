// Object: BFUIVehicleInstanceObjectListEntityData
// ClassId: 2417
// RuntimeId: 14862
// TypeInfo: 0x0000000144D84D20
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIVehicleKitStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleInstanceObjectListEntityData : public Entity::EntityData {
        Array<CasablancaShared::BFUIVehicleKitStruct> StaticVehicleKitList; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIVehicleInstanceObjectListEntityData) == 0x28);
}
#pragma pack(pop)