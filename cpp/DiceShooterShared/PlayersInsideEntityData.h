// Object: PlayersInsideEntityData
// ClassId: 3033
// RuntimeId: 60908
// TypeInfo: 0x0000000144DE4A70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/QueryEntityFilter.h"
#include "../DiceShooterShared/PlayersInsideEntity_TeamInfo.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayersInsideEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        DiceShooterShared::QueryEntityFilter OutputFilter; // 0x24
        Array<DiceShooterShared::PlayersInsideEntity_TeamInfo> TeamsInfos; // 0x28
        Uint32 TeamsMask; // 0x30
        char pad_0x34[0x4];
        Array<Uint32> AllowedEmptyControllableHashes; // 0x38
        Boolean Enabled; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(PlayersInsideEntityData) == 0x48);
}
#pragma pack(pop)