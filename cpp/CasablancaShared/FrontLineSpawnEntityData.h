// Object: FrontLineSpawnEntityData
// ClassId: 2773
// RuntimeId: 63583
// TypeInfo: 0x0000000144D5B9E0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FrontLineSpawnEntityData : public Entity::EntityData {
        Float32 HotZoneRadius; // 0x20
        Int32 EnemyCountThreshold; // 0x24
        Int32 FriendlyCountThreshold; // 0x28
        Int32 MaxDesiredHotZoneTeamDiff; // 0x2C
        Float32 SquadSpawnOverrideDistance; // 0x30
        Boolean AllowSpawnOnPlayer; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(FrontLineSpawnEntityData) == 0x38);
}
#pragma pack(pop)