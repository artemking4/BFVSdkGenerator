// Object: AIPathlinkTestEntityData
// ClassId: 2012
// RuntimeId: 9757
// TypeInfo: 0x0000000144C12F00
#include "../Entity/EntityData.h"
#include "../BattleAIShared/AIMoveSettings.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIPathlinkTestEntityData : public Entity::EntityData {
        BattleAIShared::AIMoveSettings MoveSettings; // 0x20
    }; // 0x28
    static_assert(sizeof(AIPathlinkTestEntityData) == 0x28);
}
#pragma pack(pop)