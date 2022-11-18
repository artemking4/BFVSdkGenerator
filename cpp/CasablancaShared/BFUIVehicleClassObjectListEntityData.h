// Object: BFUIVehicleClassObjectListEntityData
// ClassId: 2414
// RuntimeId: 29604
// TypeInfo: 0x0000000144D84F20
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIVehicleClassStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleClassObjectListEntityData : public Entity::EntityData {
        Array<CasablancaShared::BFUIVehicleClassStruct> StaticVehicleClassList; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIVehicleClassObjectListEntityData) == 0x28);
}
#pragma pack(pop)