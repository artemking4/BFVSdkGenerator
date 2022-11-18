// Object: BFUIGetNextUIObjectEntityData
// ClassId: 2231
// RuntimeId: 35971
// TypeInfo: 0x0000000144D81CA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetNextUIObjectEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString UIObjectType; // 0x28
        CString UIObjectListType; // 0x30
        Boolean Wrap; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(BFUIGetNextUIObjectEntityData) == 0x40);
}
#pragma pack(pop)