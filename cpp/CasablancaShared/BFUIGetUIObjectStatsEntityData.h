// Object: BFUIGetUIObjectStatsEntityData
// ClassId: 2261
// RuntimeId: 33702
// TypeInfo: 0x0000000144D81E20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../CasablancaShared/BFUISpecTreeItemInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetUIObjectStatsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString UIObjectType; // 0x28
        CasablancaShared::BFUISpecTreeItemInstanceObject PreviewSpecTreeItem; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIGetUIObjectStatsEntityData) == 0x38);
}
#pragma pack(pop)