// Object: ServerPersistenceRelatedPlayerIteratorEntityData
// ClassId: 3183
// RuntimeId: 59296
// TypeInfo: 0x0000000144DA2800
#include "../Entity/EntityData.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"
#include "../CasablancaShared/Relation.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceRelatedPlayerIteratorEntityData : public Entity::EntityData {
        DicePersistenceShared::PersistenceContextObject InputContext; // 0x20
        CasablancaShared::Relation Relation; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ServerPersistenceRelatedPlayerIteratorEntityData) == 0x30);
}
#pragma pack(pop)