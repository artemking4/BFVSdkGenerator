// Object: UIVehicleAmmoItemCrosshairEntityData
// ClassId: 3782
// RuntimeId: 29065
// TypeInfo: 0x0000000144D666F0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIVehicleAmmoItemCrosshairEntityData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UIVehicleAmmoItemCrosshairEntityData) == 0x28);
}
#pragma pack(pop)