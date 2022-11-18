// Object: UIVehicleSeatingDataProviderEntityData
// ClassId: 3784
// RuntimeId: 20460
// TypeInfo: 0x0000000144D41050
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIVehicleSeatingDataProviderEntityData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UIVehicleSeatingDataProviderEntityData) == 0x28);
}
#pragma pack(pop)