// Object: ServerSendEventEntity
// ClassId: 7694
// RuntimeId: 35148
// TypeInfo: 0x0000000144DD4EC0
#include "../DiceShooter/ServerRemoteEventEntity.h"

namespace DiceShooter {
    class ServerSendEventEntity : public DiceShooter::ServerRemoteEventEntity {
        char pad_0x40[0x18];
    }; // 0x58
    static_assert(sizeof(ServerSendEventEntity) == 0x58);
}