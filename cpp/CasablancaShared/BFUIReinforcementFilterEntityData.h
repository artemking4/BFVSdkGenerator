// Object: BFUIReinforcementFilterEntityData
// ClassId: 2369
// RuntimeId: 8091
// TypeInfo: 0x0000000144D814A0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/SquadItemAndStateList.h"
#include "../CasablancaShared/BFUIVehicleInstanceObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIReinforcementFilterEntityData : public Entity::EntityData {
        CasablancaShared::SquadItemAndStateList ItemAndStateList; // 0x20
        CasablancaShared::BFUIVehicleInstanceObjectList In; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIReinforcementFilterEntityData) == 0x30);
}
#pragma pack(pop)