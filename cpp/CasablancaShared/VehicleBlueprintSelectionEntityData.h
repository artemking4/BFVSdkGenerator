// Object: VehicleBlueprintSelectionEntityData
// ClassId: 3872
// RuntimeId: 59269
// TypeInfo: 0x0000000144D808A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIVehicleKitObject.h"
#include "../CasablancaShared/BFUIVehicleLoadoutObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VehicleBlueprintSelectionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIVehicleKitObject Vehicle; // 0x28
        CasablancaShared::BFUIVehicleLoadoutObject VehicleLoadout; // 0x30
    }; // 0x38
    static_assert(sizeof(VehicleBlueprintSelectionEntityData) == 0x38);
}
#pragma pack(pop)