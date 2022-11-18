// Object: GameRoundEntityData
// ClassId: 2781
// RuntimeId: 60569
// TypeInfo: 0x0000000144C82F40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class GameRoundEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 RoundTimeLimit; // 0x24
    }; // 0x28
    static_assert(sizeof(GameRoundEntityData) == 0x28);
}
#pragma pack(pop)