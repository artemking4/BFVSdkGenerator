// Object: BFUIGetFactionInfoEntityData
// ClassId: 2222
// RuntimeId: 36792
// TypeInfo: 0x0000000144D83CA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIFactionObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetFactionInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        Boolean IncludeUnownedSoldiers; // 0x30
        Boolean ListUnownedSoldiersLast; // 0x31
        Boolean IncludeUnownedVehicles; // 0x32
        Boolean ListUnownedVehiclesLast; // 0x33
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(BFUIGetFactionInfoEntityData) == 0x38);
}
#pragma pack(pop)