// Object: ServerLookAtTriggerEntity
// ClassId: 7763
// RuntimeId: 62361
// TypeInfo: 0x0000000144F2E5E0
#include "../GameServer/ServerCharacterLookAtTriggerEntity.h"

namespace Soldier {
    class ServerLookAtTriggerEntity : public GameServer::ServerCharacterLookAtTriggerEntity {
        char pad_0x140[0x10];
    }; // 0x150
    static_assert(sizeof(ServerLookAtTriggerEntity) == 0x150);
}