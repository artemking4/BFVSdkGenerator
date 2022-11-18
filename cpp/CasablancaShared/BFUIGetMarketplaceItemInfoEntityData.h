// Object: BFUIGetMarketplaceItemInfoEntityData
// ClassId: 2230
// RuntimeId: 22269
// TypeInfo: 0x0000000144D80820
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetMarketplaceItemInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString UIObjectType; // 0x28
        Boolean Enabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFUIGetMarketplaceItemInfoEntityData) == 0x38);
}
#pragma pack(pop)