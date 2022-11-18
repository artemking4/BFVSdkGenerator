// Object: SquadQueryEntityData
// ClassId: 3503
// RuntimeId: 62359
// TypeInfo: 0x0000000144D4B170
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/QueryEntityFilter.h"
#include "../GameShared/TeamId.h"
#include "../GameShared/SquadId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        DiceShooterShared::QueryEntityFilter OutputFilterType; // 0x24
        GameShared::TeamId TeamId; // 0x28
        GameShared::SquadId SquadId; // 0x2C
        Boolean UseSquadIdForQuery; // 0x30
        Boolean ExcludeEventPlayerFromSquad; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(SquadQueryEntityData) == 0x38);
}
#pragma pack(pop)