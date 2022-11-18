// Object: ServerCharacterLookAtTriggerEntity
// ClassId: 7762
// RuntimeId: 12203
// TypeInfo: 0x0000000144E63720
#include "../GameServer/ServerTriggerEntity.h"

namespace GameServer {
    class ServerCharacterLookAtTriggerEntity : public GameServer::ServerTriggerEntity {
        char pad_0x80[0xC0];
    }; // 0x140
    static_assert(sizeof(ServerCharacterLookAtTriggerEntity) == 0x140);
}