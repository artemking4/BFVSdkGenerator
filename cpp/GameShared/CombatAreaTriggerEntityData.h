// Object: CombatAreaTriggerEntityData
// ClassId: 2518
// RuntimeId: 5271
// TypeInfo: 0x0000000144E77740
#include "../Entity/EntityData.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace GameShared {
    class CombatAreaTriggerEntityData : public Entity::EntityData {
        Uint32 TimeToReturn; // 0x20
        Uint32 TimeToReturnInSurroundingAreaVehicle; // 0x24
        GameShared::TeamId Team; // 0x28
        Boolean IsAiAllowedOutside; // 0x2C
        Boolean IsTeamSpecific; // 0x2D
        Boolean Enabled; // 0x2E
        Boolean AllowRevivingDeserters; // 0x2F
        Boolean UseGeometryHeight; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(CombatAreaTriggerEntityData) == 0x38);
}
#pragma pack(pop)