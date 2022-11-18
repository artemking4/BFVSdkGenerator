// Object: BFUIGetSpecTreeItemInfoEntityData
// ClassId: 2250
// RuntimeId: 43733
// TypeInfo: 0x0000000144D50A50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISpecTreeItemInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetSpecTreeItemInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISpecTreeItemInstanceObject SpecTreeItem; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIGetSpecTreeItemInfoEntityData) == 0x30);
}
#pragma pack(pop)