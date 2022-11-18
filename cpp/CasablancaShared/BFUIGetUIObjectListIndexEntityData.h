// Object: BFUIGetUIObjectListIndexEntityData
// ClassId: 2260
// RuntimeId: 43897
// TypeInfo: 0x0000000144D80720
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetUIObjectListIndexEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString UIObjectListType; // 0x28
        CString UIObjectType; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIGetUIObjectListIndexEntityData) == 0x38);
}
#pragma pack(pop)