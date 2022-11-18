// Object: ClientSyncedSequenceEntity
// ClassId: 7379
// RuntimeId: 16216
// TypeInfo: 0x0000000144E3BFE0
#include "../Entity/SequenceEntity.h"

namespace GameClient {
    class ClientSyncedSequenceEntity : public Entity::SequenceEntity {
        char pad_0x78[0x10];
    }; // 0x88
    static_assert(sizeof(ClientSyncedSequenceEntity) == 0x88);
}