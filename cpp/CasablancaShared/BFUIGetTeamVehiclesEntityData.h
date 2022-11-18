// Object: BFUIGetTeamVehiclesEntityData
// ClassId: 2259
// RuntimeId: 44832
// TypeInfo: 0x0000000144D41650
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetTeamVehiclesEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        Boolean UpdateAutomatically; // 0x24
        Boolean OutputForLocalTeam; // 0x25
        Boolean ExcludeEquipmentVehicles; // 0x26
        Boolean ExcludeNonspawnableVehicles; // 0x27
        Boolean ExcludeTowableVehicles; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIGetTeamVehiclesEntityData) == 0x30);
}
#pragma pack(pop)