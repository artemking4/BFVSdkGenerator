// Object: AreaTriggerEntityData
// ClassId: 3454
// RuntimeId: 15824
// TypeInfo: 0x0000000144E8EF60
#include "../GameShared/TriggerEntityData.h"
#include "../Core/LinearTransform.h"
#include "../GameShared/AreaTriggerInclude.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/TeamId.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace GameShared {
    class AreaTriggerEntityData : public GameShared::TriggerEntityData {
        Core::LinearTransform GeometryTransform; // 0x70
        GameShared::AreaTriggerInclude Include; // 0xB0
        Float32 Radius; // 0xB4
        Float32 InsideAreaEventRepeatTime; // 0xB8
        GameShared::TeamId TeamOfAllies; // 0xBC
        Int32 UpdateInterval; // 0xC0
        Boolean UseCharacterEntity; // 0xC4
        Boolean UseRadiusWithGeometryTransform; // 0xC5
        Boolean GeometriesFollowObject; // 0xC6
        Boolean OneInsideAreaEventPerSoldier; // 0xC7
        Boolean TriggerOnlyOnLeave; // 0xC8
        Boolean ResetOnEnable; // 0xC9
        Boolean TriggerOnLeaveOnDeath; // 0xCA
        Boolean TriggerOnLeaveOnDisable; // 0xCB
        char pad_0xCC[0x4];
    }; // 0xD0
    static_assert(sizeof(AreaTriggerEntityData) == 0xD0);
}
#pragma pack(pop)