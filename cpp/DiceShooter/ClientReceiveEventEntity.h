// Object: ClientReceiveEventEntity
// ClassId: 6839
// RuntimeId: 31258
// TypeInfo: 0x0000000144DDD0C0
#include "../DiceShooter/ClientRemoteEventEntity.h"

namespace DiceShooter {
    class ClientReceiveEventEntity : public DiceShooter::ClientRemoteEventEntity {
        char pad_0x40[0x60];
    }; // 0xA0
    static_assert(sizeof(ClientReceiveEventEntity) == 0xA0);
}