// Object: ServerCharacterStateTriggerEntity
// ClassId: 7764
// RuntimeId: 43723
// TypeInfo: 0x0000000144F2E6F0
#include "../GameServer/ServerTriggerEntity.h"

namespace Soldier {
    class ServerCharacterStateTriggerEntity : public GameServer::ServerTriggerEntity {
        char pad_0x80[0x30];
    }; // 0xB0
    static_assert(sizeof(ServerCharacterStateTriggerEntity) == 0xB0);
}