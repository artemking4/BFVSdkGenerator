// Object: PlayersQueryEntityData
// ClassId: 3034
// RuntimeId: 63690
// TypeInfo: 0x0000000144DE49F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/PlayersQueryEntityInputData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/QueryEntityFilter.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayersQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::TeamId TeamId; // 0x24
        DiceShooterShared::QueryEntityFilter OutputFilter; // 0x28
        DiceShooterShared::PlayersQueryEntityInputData InputData; // 0x2C
        Boolean AlwaysEnabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(PlayersQueryEntityData) == 0x38);
}
#pragma pack(pop)