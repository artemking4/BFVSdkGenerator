// Object: ServerSubLevelEntity
// ClassId: 8079
// RuntimeId: 49844
// TypeInfo: 0x0000000144E58590
#include "../Entity/SubLevelEntity.h"

namespace GameServer {
    class ServerSubLevelEntity : public Entity::SubLevelEntity {
        char pad_0x48[0x100];
    }; // 0x148
    static_assert(sizeof(ServerSubLevelEntity) == 0x148);
}