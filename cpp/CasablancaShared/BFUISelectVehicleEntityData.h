// Object: BFUISelectVehicleEntityData
// ClassId: 2376
// RuntimeId: 8931
// TypeInfo: 0x0000000144D82A20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"
#include "../CasablancaShared/BFUIFactionObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISelectVehicleEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x28
        CasablancaShared::BFUIFactionObject Faction; // 0x30
        Boolean SaveAutomatically; // 0x38
        Boolean SaveOnDeinit; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(BFUISelectVehicleEntityData) == 0x40);
}
#pragma pack(pop)