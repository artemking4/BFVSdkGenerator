// Object: BFUIVehicleInfoEntityData
// ClassId: 2415
// RuntimeId: 60364
// TypeInfo: 0x0000000144D415D0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIVehicleObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUIVehicleObject Vehicle; // 0x20
        Boolean UpdateAutomatically; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIVehicleInfoEntityData) == 0x30);
}
#pragma pack(pop)