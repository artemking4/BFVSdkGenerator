// Object: ClientSendEventEntity
// ClassId: 6840
// RuntimeId: 50196
// TypeInfo: 0x0000000144DDCD90
#include "../DiceShooter/ClientRemoteEventEntity.h"

namespace DiceShooter {
    class ClientSendEventEntity : public DiceShooter::ClientRemoteEventEntity {
        char pad_0x40[0x18];
    }; // 0x58
    static_assert(sizeof(ClientSendEventEntity) == 0x58);
}