// Object: EntryLinkHubEntityData
// ClassId: 2697
// RuntimeId: 30562
// TypeInfo: 0x0000000144C82BC0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class EntryLinkHubEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 EntryIndex; // 0x24
    }; // 0x28
    static_assert(sizeof(EntryLinkHubEntityData) == 0x28);
}
#pragma pack(pop)