// Object: BFUIGetAvailableVehiclesEntityData
// ClassId: 2214
// RuntimeId: 1954
// TypeInfo: 0x0000000144D82920
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUIVehicleKitObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetAvailableVehiclesEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::BFUIVehicleKitObject Vehicle; // 0x30
        Boolean IncludeUnownedObjects; // 0x38
        Boolean ListUnownedObjectsLast; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(BFUIGetAvailableVehiclesEntityData) == 0x40);
}
#pragma pack(pop)