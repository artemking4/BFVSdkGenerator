// Object: ServerAIAreaSpawnQueryEntity
// ClassId: 7444
// RuntimeId: 14564
// TypeInfo: 0x0000000144BFC8C0
#include "../Soldier/ServerAreaSpawnQueryEntity.h"

namespace BattleAI {
    class ServerAIAreaSpawnQueryEntity : public Soldier::ServerAreaSpawnQueryEntity {
        char pad_0xB0[0x40];
    }; // 0xF0
    static_assert(sizeof(ServerAIAreaSpawnQueryEntity) == 0xF0);
}