// Object: EncounterObjectivePlayerProximityEntityData
// ClassId: 2690
// RuntimeId: 42070
// TypeInfo: 0x0000000144D0B8B0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterObjectivePlayerProximityEntityData : public Entity::EntityData {
        Float32 Radius; // 0x20
        GameShared::TeamId Team; // 0x24
    }; // 0x28
    static_assert(sizeof(EncounterObjectivePlayerProximityEntityData) == 0x28);
}
#pragma pack(pop)