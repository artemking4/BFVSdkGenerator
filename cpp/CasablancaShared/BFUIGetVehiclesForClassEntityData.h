// Object: BFUIGetVehiclesForClassEntityData
// ClassId: 2271
// RuntimeId: 35309
// TypeInfo: 0x0000000144D858A0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIVehicleClassObject.h"
#include "../CasablancaShared/BFUIFactionObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetVehiclesForClassEntityData : public Entity::EntityData {
        CasablancaShared::BFUIVehicleClassObject Class; // 0x20
        CasablancaShared::BFUIFactionObject Faction; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIGetVehiclesForClassEntityData) == 0x30);
}
#pragma pack(pop)