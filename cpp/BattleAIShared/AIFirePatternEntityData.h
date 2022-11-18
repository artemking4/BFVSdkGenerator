// Object: AIFirePatternEntityData
// ClassId: 1977
// RuntimeId: 23658
// TypeInfo: 0x0000000144C13200
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/SimpleFirePatternData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIFirePatternEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<BattleAIShared::SimpleFirePatternData> SimplePatterns; // 0x28
        Int32 PatternToUse; // 0x30
        Boolean WantsToFire; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(AIFirePatternEntityData) == 0x38);
}
#pragma pack(pop)