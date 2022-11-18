// Object: AIGlobalStateEntityData
// ClassId: 1978
// RuntimeId: 13347
// TypeInfo: 0x0000000144BFEFD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/TeamId.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIGlobalStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::TeamId Team; // 0x24
        Float32 EnemyAICollectionRadius; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(AIGlobalStateEntityData) == 0x30);
}
#pragma pack(pop)