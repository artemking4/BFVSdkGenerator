// Object: SurroundingGeometryEntityData
// ClassId: 3533
// RuntimeId: 38110
// TypeInfo: 0x0000000144E77840
#include "../Entity/EntityData.h"
#include "../GameShared/AllowedVehiclesData.h"
#include "../GameShared/CombatAreaTriggerEntityData.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class SurroundingGeometryEntityData : public Entity::EntityData {
        GameShared::AllowedVehiclesData AllowedVehicleList; // 0x20
        GameShared::CombatAreaTriggerEntityData CombatArea; // 0x28
        Uint32 CombatAreaIndex; // 0x30
        Boolean Enabled; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(SurroundingGeometryEntityData) == 0x38);
}
#pragma pack(pop)