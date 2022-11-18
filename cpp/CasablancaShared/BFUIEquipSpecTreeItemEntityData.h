// Object: BFUIEquipSpecTreeItemEntityData
// ClassId: 2186
// RuntimeId: 61853
// TypeInfo: 0x0000000144D509D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISpecTreeItemInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIEquipSpecTreeItemEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISpecTreeItemInstanceObject SpecTreeItem; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIEquipSpecTreeItemEntityData) == 0x30);
}
#pragma pack(pop)