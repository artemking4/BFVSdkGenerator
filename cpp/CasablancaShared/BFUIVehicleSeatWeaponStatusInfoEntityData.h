// Object: BFUIVehicleSeatWeaponStatusInfoEntityData
// ClassId: 2422
// RuntimeId: 29186
// TypeInfo: 0x0000000144D4C270
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../CasablancaShared/BFUIVehicleSeatObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleSeatWeaponStatusInfoEntityData : public Entity::EntityData {
        CString WeaponCategory; // 0x20
        CasablancaShared::BFUIVehicleSeatObject Seat; // 0x28
        Boolean UpdateAutomatically; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFUIVehicleSeatWeaponStatusInfoEntityData) == 0x38);
}
#pragma pack(pop)