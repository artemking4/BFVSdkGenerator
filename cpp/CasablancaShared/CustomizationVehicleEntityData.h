// Object: CustomizationVehicleEntityData
// ClassId: 3348
// RuntimeId: 49181
// TypeInfo: 0x0000000144D35CB0
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIVehicleLoadoutObject.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class CustomizationVehicleEntityData : public Entity::SpatialEntityData {
        Core::Realm Realm; // 0x60
        char pad_0x64[0x4];
        CasablancaShared::BFUIVehicleLoadoutObject VehicleLoadout; // 0x68
        Boolean Enabled; // 0x70
        Boolean ShowEmblem; // 0x71
        char pad_0x72[0xE];
    }; // 0x80
    static_assert(sizeof(CustomizationVehicleEntityData) == 0x80);
}
#pragma pack(pop)