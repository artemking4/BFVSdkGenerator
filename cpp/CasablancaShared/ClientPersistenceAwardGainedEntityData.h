// Object: ClientPersistenceAwardGainedEntityData
// ClassId: 2488
// RuntimeId: 54030
// TypeInfo: 0x0000000144DA04E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/AwardGroup.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientPersistenceAwardGainedEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::AwardGroup AwardGroup; // 0x24
    }; // 0x28
    static_assert(sizeof(ClientPersistenceAwardGainedEntityData) == 0x28);
}
#pragma pack(pop)