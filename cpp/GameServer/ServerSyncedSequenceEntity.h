// Object: ServerSyncedSequenceEntity
// ClassId: 7380
// RuntimeId: 45477
// TypeInfo: 0x0000000144E607E0
#include "../Entity/SequenceEntity.h"

namespace GameServer {
    class ServerSyncedSequenceEntity : public Entity::SequenceEntity {
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(ServerSyncedSequenceEntity) == 0x80);
}