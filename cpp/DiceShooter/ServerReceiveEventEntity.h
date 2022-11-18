// Object: ServerReceiveEventEntity
// ClassId: 7693
// RuntimeId: 7870
// TypeInfo: 0x0000000144DD51F0
#include "../DiceShooter/ServerRemoteEventEntity.h"

namespace DiceShooter {
    class ServerReceiveEventEntity : public DiceShooter::ServerRemoteEventEntity {
        char pad_0x40[0x40];
    }; // 0x80
    static_assert(sizeof(ServerReceiveEventEntity) == 0x80);
}