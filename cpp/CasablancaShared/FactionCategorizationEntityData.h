// Object: FactionCategorizationEntityData
// ClassId: 2735
// RuntimeId: 25799
// TypeInfo: 0x0000000144DA3200
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FactionCategorizationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::TeamId TeamId; // 0x24
    }; // 0x28
    static_assert(sizeof(FactionCategorizationEntityData) == 0x28);
}
#pragma pack(pop)