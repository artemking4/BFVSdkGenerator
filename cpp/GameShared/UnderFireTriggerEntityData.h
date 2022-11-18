// Object: UnderFireTriggerEntityData
// ClassId: 3470
// RuntimeId: 20456
// TypeInfo: 0x0000000144E8E860
#include "../GameShared/TriggerEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Entity/MaterialDecl.h"
#include "../GameShared/AreaTriggerInclude.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 16)
namespace GameShared {
    class UnderFireTriggerEntityData : public GameShared::TriggerEntityData {
        Float32 Radius; // 0x70
        Float32 CoolDownTime; // 0x74
        Entity::MaterialDecl TriggerOnMaterialOnly; // 0x78
        GameShared::AreaTriggerInclude TriggeredBy; // 0x7C
        GameShared::TeamId TeamOfAllies; // 0x80
        Boolean UseTriggerOnMaterialOnly; // 0x84
        Boolean GeometriesFollowObject; // 0x85
        Boolean DisableIfTrackEntityIsLost; // 0x86
        Boolean RandomYaw; // 0x87
        Boolean IndicateHit; // 0x88
        char pad_0x89[0x7];
    }; // 0x90
    static_assert(sizeof(UnderFireTriggerEntityData) == 0x90);
}
#pragma pack(pop)