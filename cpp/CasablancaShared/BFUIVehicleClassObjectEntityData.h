// Object: BFUIVehicleClassObjectEntityData
// ClassId: 2413
// RuntimeId: 1815
// TypeInfo: 0x0000000144D84FA0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIVehicleClassStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleClassObjectEntityData : public Entity::EntityData {
        CasablancaShared::BFUIVehicleClassStruct StaticVehicleClass; // 0x20
    }; // 0x30
    static_assert(sizeof(BFUIVehicleClassObjectEntityData) == 0x30);
}
#pragma pack(pop)