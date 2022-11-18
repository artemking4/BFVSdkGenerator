// Object: RosterEntityData
// ClassId: 3133
// RuntimeId: 4456
// TypeInfo: 0x0000000144DA2900
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RosterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DicePersistenceShared::PersistenceContextObject InputContext; // 0x28
    }; // 0x30
    static_assert(sizeof(RosterEntityData) == 0x30);
}
#pragma pack(pop)