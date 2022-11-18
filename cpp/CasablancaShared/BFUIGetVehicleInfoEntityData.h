// Object: BFUIGetVehicleInfoEntityData
// ClassId: 2266
// RuntimeId: 63092
// TypeInfo: 0x0000000144D82AA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetVehicleInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIGetVehicleInfoEntityData) == 0x30);
}
#pragma pack(pop)