// Object: BFUIBattlepackVehicleItemEntityData
// ClassId: 2157
// RuntimeId: 11960
// TypeInfo: 0x0000000144D30920
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BattlepackItem.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBattlepackVehicleItemEntityData : public Entity::EntityData {
        CasablancaShared::BattlepackItem Item; // 0x20
        CasablancaShared::BFUIVehicleInstanceObject CustomizedVehicle; // 0x28
        Boolean Enabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFUIBattlepackVehicleItemEntityData) == 0x38);
}
#pragma pack(pop)