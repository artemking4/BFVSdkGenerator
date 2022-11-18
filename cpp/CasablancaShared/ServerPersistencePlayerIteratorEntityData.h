// Object: ServerPersistencePlayerIteratorEntityData
// ClassId: 3178
// RuntimeId: 49068
// TypeInfo: 0x0000000144DA2880
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistencePlayerIteratorEntityData : public Entity::EntityData {
        Int32 TeamId; // 0x20
        Int32 SquadId; // 0x24
    }; // 0x28
    static_assert(sizeof(ServerPersistencePlayerIteratorEntityData) == 0x28);
}
#pragma pack(pop)