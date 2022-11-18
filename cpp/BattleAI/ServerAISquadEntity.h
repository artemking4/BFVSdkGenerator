// Object: ServerAISquadEntity
// ClassId: 7409
// RuntimeId: 35997
// TypeInfo: 0x0000000144BF4BF0
#include "../BattleAI/ServerAIParameterEntity.h"

namespace BattleAI {
    class ServerAISquadEntity : public BattleAI::ServerAIParameterEntity {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(ServerAISquadEntity) == 0x48);
}